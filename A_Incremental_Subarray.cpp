#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(k + 1, 0);

    for (int i = 1; i <= k; i++) {
        cin >> v[i];
    }

    int ans = n - v[k] + 1;
    for (int i = 2; i <= k; i++) {
        if (v[i] == 1)
        {
             ans = 1;
        }
    }

    cout << ans << nl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
