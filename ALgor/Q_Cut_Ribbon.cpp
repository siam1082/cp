#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    // first dp problem dp te e solvee 
    vector<int> dp(n + 1, -1e18);

    dp[0] = 0;
    // because when the ribbon length is 0, we need 0 pieces (base case)

    for (int i = 1; i <= n; i++) {
        if (i - a >= 0) {
            dp[i] = max(dp[i], dp[i - a] + 1);
        }
        if (i - b >= 0) {
            dp[i] = max(dp[i], dp[i - b] + 1);
        }
        if (i - c >= 0) {
            dp[i] = max(dp[i], dp[i - c] + 1);
        }
    }

    cout << dp[n] << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    magic();

    return 0;
}