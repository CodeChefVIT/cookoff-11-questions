#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n; 
        long long int p = 5;
        long long int v = 0; 
        while (n / p > 0) {
            v += (n / p); 
            p *= 5; 
        }
        cout << v << "\n"; 
    }
}