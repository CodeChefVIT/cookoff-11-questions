#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    priority_queue<long long, vector<long long>, greater<long long>> minheap;
    long long x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        minheap.push(x);
        if ((int)minheap.size() > k) {
            minheap.pop();
        }
    }
    int r;
    cin >> r;
    while (r--) {
        cin >> x;
        minheap.push(x);
        if ((int)minheap.size() > k) {
            minheap.pop();
        }
        cout << minheap.top() << "\n";
    }
}