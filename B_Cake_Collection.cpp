#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;
    ll m = min(n, k);

    vector<ll> v(n);
    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
    }

    ll sum = 0;

    sort(v.begin(), v.end(), greater<ll>());

    for (ll i = 0; i < m; ++i) {
        sum += v[i] * (k - i);
    }

    cout << sum << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}