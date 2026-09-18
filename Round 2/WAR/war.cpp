#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool found = false; 
        for (int k = 2; k <= 1000; k++) {
            // 1 + k + k^2 + .... + k^m == n. 
            int sum = 1 + k + k*k; 
            int next = k*k*k; 
            while (sum < n) {
                sum += next;
                next *= k; 
            }
            if (sum == n) {
                cout << "YES" << "\n"; 
                found = true;
                break; 
            }
        }
        if (!found) {
            cout << "NO" << "\n"; 
        }
    }
}