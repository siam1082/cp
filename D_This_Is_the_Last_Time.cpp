#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    vector<tuple<ll, ll, ll>> v(n);
    for (int i = 0; i < n; i++) {
        ll l, r, x;
        cin >> l >> r >> x;
        v[i] = {l, r, x};
    }

    sort(v.begin(), v.end());

    ll cur = k;
    int j = 0;
    priority_queue<ll> pq;

    while (true) {
        while (j < n && get<0>(v[j]) <= cur) {
            if (cur <= get<1>(v[j])) {
                pq.push(get<2>(v[j]));
            }
            j++;
        }

        if (pq.empty()) break;

        ll next = pq.top(); pq.pop();
        if (next <= cur) break;
        cur = next;
    }

    cout << cur << nl;
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