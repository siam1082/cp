#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m), c(m);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];
    for (int i = 0; i < m; ++i) cin >> c[i];

    multiset<ll> pool(a.begin(), a.end());                   // current swords

    vector<pair<ll,ll>> mons(m);                             // (life, reward)
    for (int i = 0; i < m; ++i) mons[i] = {b[i], c[i]};
    sort(mons.begin(), mons.end());                          // easiest first

    ll kills = 0;
    for (auto [need, reward] : mons) {
        auto it = pool.lower_bound(need);                    // smallest sword ≥ need
        if (it == pool.end()) continue;                      // can't kill this monster

        ll x = *it;
        pool.erase(it);                                      // sword disappears

        if (reward > 0) pool.insert(max(x, reward));         // reward sword (upgrade)
        ++kills;
    }

    cout << kills << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

