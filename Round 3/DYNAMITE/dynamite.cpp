#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a = -1, b = -1, c = -1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            a = i;
            break;
        }
    }
    if (a == -1) {
        cout << "NO\n";
        return;
    }
    int rem = n / a;
    for (int j = a + 1; j * j < rem; ++j) {
        if (rem % j == 0) {
            b = j;
            c = rem / b;
            break;
        }
    }
    if (b != -1 && c > b) {
        cout << "YES\n";
        cout << a << " " << b << " " << c << "\n";
    } else {
        cout << "NO\n";
    }
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