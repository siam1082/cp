#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n), pmax(n + 1), psum(n + 1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pmax[i + 1] = max(pmax[i], a[i]);       // prefix max
        psum[i + 1] = psum[i] + a[i];           // prefix sum
    }

    for (int k = 1; k <= n; k++) {
        ll lastKsum = psum[n] - psum[n - k];    // sum of last k elements
        ll maxBeforeLastK = pmax[n - k + 1];    // max before last k
        cout << lastKsum + maxBeforeLastK << " ";
    }
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}