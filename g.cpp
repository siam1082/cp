#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve() {
    int n; cin >> n;
    vector<int>v(n);
    map<int,int>m;
    for (auto &x : v) {
        cin >> x;
        m[x]++;
    }

    vector<int>dp(n + 1, 0);

    dp[0] = 0;

    int mx = 0, cnt = 0, minus = 0;

    for (int i = 1; i <= n; i++) {
        if (m[v[i - 1]] > 1) {
            dp[i] = -1;
            minus++;
        }
        if (v[i - 1] <= mx) {
            dp[i] = -1;
            minus++;
        }
        else {
            cnt++;
            if(dp[i] == 0) dp[i] = cnt;
            mx = max(mx, v[i - 1]);
        }
    }

    int minx = v[n - 1];
    for (int i = n - 1; i > 0; i--) {
        
        if (dp[i] == -1) {
            minx = min(minx, v[i - 1]);
            continue;
        }
        if (minx <= v[i - 1]) {
            dp[i] = -1;
            minus++;

            minx = min(minx, v[i - 1]);
        }
    }

    if (dp[1] >= minx) dp[1] = -1;

    if (!minus) {
        cout << 1 << nl;
        return;
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (dp[i] != -1) {
                cout << i << nl;
                return;
            }
        }
    }
    cout << "Humanity is doomed!" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
}