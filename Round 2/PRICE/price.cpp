#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t;
    cin >> t; 
    while (t--) {
        long long int n;
        cin >> n;
        cout << ((n & (n - 1)) ? "NO" : "YES") << "\n"; 
    }
}