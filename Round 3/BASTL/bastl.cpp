#include <bits/stdc++.h>
using namespace std;

constexpr long long INF = 1e18;

// Structure representing a graph edge
struct Edge {
    int to;
    long long weight;
};

// State for the min-priority queue in Dijkstra
struct State {
    long long dist;
    int u;
    bool max_used;
    bool min_used;

    // Min-heap ordering
    bool operator>(const State& other) const {
        return dist > other.dist;
    }
};

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;

    vector<vector<Edge>> graph(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        --u; --v; // 0-based indexing
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    // dist[u][max_used][min_used]
    vector<vector<vector<long long>>> dist(
        n, vector<vector<long long>>(2, vector<long long>(2, INF))
    );

    priority_queue<State, vector<State>, greater<State>> pq;

    dist[0][0][0] = 0;
    pq.push({0, 0, false, false});

    while (!pq.empty()) {
        auto [d, u, max_used, min_used] = pq.top();
        pq.pop();

        if (d > dist[u][max_used][min_used]) continue;

        for (const auto& [v, w] : graph[u]) {
            // add_max = 1 if First Decree (abolish) is used on this edge
            // add_min = 1 if Second Decree (double) is used on this edge
            for (int add_max = 0; add_max <= 1 - max_used; ++add_max) {
                for (int add_min = 0; add_min <= 1 - min_used; ++add_min) {
                    int next_max = max_used | add_max;
                    int next_min = min_used | add_min;

                    // Effective toll multiplier: (1 - add_max + add_min) * w
                    long long effective_weight = (1 - add_max + add_min) * w;
                    long long new_dist = d + effective_weight;

                    if (new_dist < dist[v][next_max][next_min]) {
                        dist[v][next_max][next_min] = new_dist;
                        pq.push({new_dist, v, static_cast<bool>(next_max), static_cast<bool>(next_min)});
                    }
                }
            }
        }
    }

    for (int i = 1; i < n; ++i) {
        cout << dist[i][1][1] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}