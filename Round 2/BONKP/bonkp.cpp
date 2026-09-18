 #include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; 
    int a; 
    int b;
    cin >> a >> b >> t; 
    vector<vector<bool>> dp(t + 1, vector<bool>(2, false)); 
    dp[0][0] = true; 
    for (int i = 0; i <= t; i++) {
        if (dp[i][0]) {
            if (i + a <= t) {
                dp[i + a][0] = true; 
            }
            if (i + b <= t) {
                dp[i + b][0] = true;
            }
            dp[i / 2][1] = true;
        }
    } 
    for (int i = 0; i <= t; i++) {
        if (dp[i][1]) {
            if (i + a <= t) {
                dp[i + a][1] = true; 
            }
            if (i + b <= t) {
                dp[i + b][1] = true;
            }
        }
    } 
    int ans = 0;
    for (int i = 0; i < dp.size(); i++) {
        if (dp[i][0] || dp[i][1]) {
            if (i > ans) {
                ans = i; 
            }
        }
    }
    cout << ans << "\n"; 
    return 0; 
}