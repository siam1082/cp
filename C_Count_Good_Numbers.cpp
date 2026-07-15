#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll unsigned long long  

ll count(ll x) {
    return x 
        - x/2 - x/3 - x/5 - x/7
        + x/6 + x/10 + x/14 + x/15 + x/21 + x/35
        - x/30 - x/42 - x/105 - x/70
        + x/210;
}

void solve() {
    ll n, m;
    cin >> n >> m;

    ll x = count(m);
    ll y = count(n - 1);

    cout << x - y << nl;
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