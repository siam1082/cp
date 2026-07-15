#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int solve(ll x) {
    return ceil(log2(x));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        ll x = min(a, n - a + 1);
        ll y = min(b, m - b + 1);

        ll p = solve(n) + solve(y);
        ll q = solve(m) + solve(x);

        cout << min(p, q) + 1 << nl;
    }

    return 0;
}
