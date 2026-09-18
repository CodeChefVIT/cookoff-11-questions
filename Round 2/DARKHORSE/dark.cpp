#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)  {
            cin >> arr[i];
        }
        int furthest = 0;
        for (int i = 0; i < n; i++) {
            if (i > furthest) {
                break;
            }
            if (i + arr[i] > furthest) {
                furthest = i + arr[i];
            }
        }
        cout << (furthest >= n - 1 ? "YES" : "NO") << "\n";
    }
}