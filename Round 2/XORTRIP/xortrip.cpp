#include <bits/stdc++.h>
using namespace std;

int countbits(int n) {
    int c = 0;
    while (n > 0) {
        c += 1;
        n >>= 1; 
    }
    return c; 
}

int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n, 0); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    if (n < 3) {
        cout << n << "\n"; 
    }
    else {
        cout << (1 << countbits(n)) << "\n"; 
    }
    return 0; 
}