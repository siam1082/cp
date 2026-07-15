#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll g = __gcd(a, b); 
    a /= g;
    b /= g;

    if (a <= c && b <= c) {
        cout << "1" << nl;
    } else {
        cout << "2" << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
