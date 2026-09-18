#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r, c;
    if (!(cin >> r >> c)) return;
    vector<vector<int>> grid(r, vector<int>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> grid[i][j];
        }
    }
    int islands = 0;
    const int dr[] = {-1, 1, 0, 0};
    const int dc[] = {0, 0, -1, 1};
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (grid[i][j] == 1) {
                ++islands;
                queue<pair<int, int>> q;
                q.push({i, j});
                grid[i][j] = 0;
                while (!q.empty()) {
                    auto [cr, cc] = q.front();
                    q.pop();
                    for (int d = 0; d < 4; ++d) {
                        int nr = cr + dr[d];
                        int nc = cc + dc[d];
                        if (nr >= 0 && nr < r && nc >= 0 && nc < c && grid[nr][nc] == 1) {
                            grid[nr][nc] = 0;
                            q.push({nr, nc});
                        }
                    }
                }
            }
        }
    }
    cout << islands << "\n";
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}