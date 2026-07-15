#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    vector<ll> c(n);
    vector<int> t(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < n; i++) cin >> t[i];

    vector<pair<ll,int>> a(n);
    for (int i = 0; i < n; i++) a[i] = {c[i], t[i]};
    sort(a.begin(), a.end());

    ll ans = 0;

    for (int i = 0; i < n; i++) {
        if (a[i].second == 1) {
            ll med;
            if (i < n/2) med = a[n/2].first;
            else med = a[(n-2)/2].first;
            ans = max(ans, a[i].first + k + med);
        }
    }

    ll lo = 0, hi = 2000000000LL;

    while (lo < hi) {
        ll mid = (lo + hi + 1) / 2;
        int cnt = 0;
        vector<ll> need;

        for (int i = 0; i < n-1; i++) {
            if (a[i].first >= mid) cnt++;
            else if (a[i].second == 1) need.push_back(mid - a[i].first);
        }

        reverse(need.begin(), need.end());

        ll kk = k;
        for (ll x : need) {
            if (kk >= x) {
                kk -= x;
                cnt++;
            }
        }

        if (cnt >= (n+1)/2) lo = mid;
        else hi = mid - 1;
    }

    ans = max(ans, a.back().first + lo);

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
}
