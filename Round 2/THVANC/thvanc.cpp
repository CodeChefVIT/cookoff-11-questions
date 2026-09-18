#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> digit, leftC, rightC;
long long s = 0;

void eval(int node, long long curr) {
    if (node == -1) {
        return;
    }
    curr = (curr * 10) + digit[node];
    if (leftC[node] == -1 && rightC[node] == -1) {
        s += curr;
    } else {
        eval(leftC[node], curr);
        eval(rightC[node], curr);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    digit.resize(n);
    leftC.resize(n);
    rightC.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> digit[i] >> leftC[i] >> rightC[i];
    }
    eval(0, 0);
    cout << s << "\n";
}