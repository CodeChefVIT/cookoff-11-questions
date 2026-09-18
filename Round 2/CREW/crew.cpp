#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t;
    cin >> t;
    while (t--) {
        int x; int y;
        cin >> x >> y;
        int sum = x + y;
        bitset<29> bits; 
        for (int i = 28; i >= 0; i--) {
            if (sum & (1 << i)) {
                bits.set(i); 
                if (bits.to_ulong() > x) {
                    bits.reset(i); 
                }
            }
        }
        int newx = bits.to_ulong(); 
        int ops = x - newx;
        cout << sum << " " << ops << "\n"; 
    }
}