#include <bits/stdc++.h>
using namespace std;

struct Fenwick {
    int n;
    vector<long long> tree_sum;
    vector<int> tree_cnt;
    Fenwick(int n) : n(n), tree_sum(n + 1, 0), tree_cnt(n + 1, 0) {}
    void add(int i, long long val) {
        for (; i <= n; i += i & -i) {
            tree_sum[i] += val;
            tree_cnt[i] += 1;
        }
    }
    pair<long long, int> query(int i) {
        long long sum = 0;
        int cnt = 0;
        for (; i > 0; i -= i & -i) {
            sum += tree_sum[i];
            cnt += tree_cnt[i];
        }
        return {sum, cnt};
    }
};

struct Query {
    int x;
    int Y;
    int id;
};

void solve() {
    int S, q;
    if (!(cin >> S >> q)) return;
    vector<int> divs;
    for (int i = 1; i * i <= S; ++i) {
        if (S % i == 0) {
            divs.push_back(i);
            if (i * i != S) {
                divs.push_back(S / i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    vector<int> max_div(S + 1, 0);
    int ptr_div = 0;
    for (int k = 1; k <= S; ++k) {
        while (ptr_div + 1 < (int)divs.size() && divs[ptr_div + 1] <= k) {
            ptr_div++;
        }
        max_div[k] = divs[ptr_div];
    }
    vector<pair<int, int>> elements(S);
    for (int j = 1; j <= S; ++j) {
        elements[j - 1] = {max_div[S / j], j};
    }
    sort(elements.begin(), elements.end());
    vector<Query> queries(q);
    for (int i = 0; i < q; ++i) {
        int x, y;
        cin >> x >> y;
        queries[i] = {x, min(y, S), i};
    }
    sort(queries.begin(), queries.end(), [](const Query& a, const Query& b) {
        return a.x < b.x;
    });
    Fenwick bit(S);
    vector<long long> ans(q);
    int elem_ptr = 0;
    for (const auto& qry : queries) {
        while (elem_ptr < S && elements[elem_ptr].first <= qry.x) {
            bit.add(elements[elem_ptr].second, elements[elem_ptr].first);
            elem_ptr++;
        }
        auto [sum_leq, cnt_leq] = bit.query(qry.Y);
        int cnt_gt = qry.Y - cnt_leq;
        ans[qry.id] = sum_leq + 1LL * qry.x * cnt_gt;
    }
    for (int i = 0; i < q; ++i) {
        cout << ans[i] << "\n";
    }
}

int main() {
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