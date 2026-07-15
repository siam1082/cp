#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];

    vector<ll> v2(n+1, 0);
    for (int i = 1; i <= n; i++) v2[i] = v2[i-1] + v[i]; 

    while (k--) {
        int m, s, o;
        cin >> m >> s >> o;

        ll sum = v2[n] - (v2[s] - v2[m-1]) + 1LL * (s - m + 1) * o; 
        cout << (sum % 2 ? "YES" : "NO") << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
