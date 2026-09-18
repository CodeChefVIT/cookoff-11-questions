#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_set<int> hashset;
    for (int i = 0; i < n; i++) {
        hashset.insert(arr[i]);
    }
    int maxlen = 0;
    for (int value : hashset) {
        int chain = 1;
        int v = value;
        if (hashset.count(v - 1)) {
            continue;
        }
        while (hashset.count(v + 1)) {
            v += 1;
            chain += 1;
        }
        if (chain > maxlen) {
            maxlen = chain;
        }
    }
    cout << maxlen << "\n";
    return 0;
}
/*
6
100 4 200 1 3 2

10
9 1 4 7 3 2 6 8 5 10

7
1 2 2 3 4 4 5

5
10 30 50 70 90
*/