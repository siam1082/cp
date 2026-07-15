#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

#define ll long long
void solve() {
    int n; 
    cin >> n;
    vector<ll> v(n + 2, 0);

    for (int i = 1; i <= n; i++) cin >> v[i];

    ll ans = 0;
    for (int i = (n / 2) * 2; i >= 1; i -= 2) {
        ll n = max(v[i - 1] + v[i + 1] - v[i], 0LL);

        ll c = min(v[i - 1], n);
        v[i - 1] -= c;

        c = n - c;
        v[i + 1] -= min(v[i + 1], c);

        ans += n;
    }

    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
