#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef __uint128_t u128;

ull mulmod(ull a, ull b, ull m) {
    return (u128)a * b % m;
}

ull powmod(ull a, ull e, ull m) {
    ull r = 1;
    a %= m;
    while (e > 0) {
        if (e & 1) r = mulmod(r, a, m);
        a = mulmod(a, a, m);
        e >>= 1;
    }
    return r;
}

bool prime(ull n) {
    if (n < 2) {
        return false;
    }
    for (ull p : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n % p == 0) {
            return n == p;
        }
    }
    ull d = n - 1;
    int s = 0;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }
    // these 12 bases are deterministic for all n < 3.3 * 10^24
    for (ull a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        ull x = powmod(a, d, n);
        if (x == 1 || x == n - 1) continue;
        bool composite = true;
        for (int r = 1; r < s; r++) {
            x = mulmod(x, x, n);
            if (x == n - 1) {
                composite = false;
                break;
            }
        }
        if (composite) return false;
    }
    return true;
}

int main() {
    ull n;
    cin >> n;
    cout << (prime(n + 1) ? "YES" : "NO") << "\n";
    return 0;
}