#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

bool check(int x, int y) {
    if (x > y) swap(x, y);
    return (x + 1) * 2 >= y;
}

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int n = c - a;
    int m = d - b;

    if (check(a, b) && check(n, m)) cout << "YES" << nl;
    else cout << "NO" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();
}

