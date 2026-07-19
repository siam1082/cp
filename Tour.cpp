#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

const double INF = 1e18;

double dist(const pair<double, double>& a, const pair<double, double>& b) {
    return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
}

void solve() {
    int n;
    while (cin >> n) {
        vector<pair<double, double>> pts(n);
        for (int i = 0; i < n; i++) {
            cin >> pts[i].first >> pts[i].second;
        }

        vector<vector<double>> dp(n, vector<double>(n, INF));
        dp[1][0] = dist(pts[0], pts[1]);

        for (int i = 1; i < n - 1; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[i][j] >= INF) continue;

                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + dist(pts[i], pts[i + 1]));
                dp[i + 1][i] = min(dp[i + 1][i], dp[i][j] + dist(pts[j], pts[i + 1]));
            }
        }

        double ans = INF;
        for (int j = 0; j < n - 1; j++) {
            ans = min(ans, dp[n - 1][j] + dist(pts[j], pts[n - 1]));
        }

        cout << fixed << setprecision(2) << ans << nl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}