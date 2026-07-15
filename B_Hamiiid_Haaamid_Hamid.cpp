#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n, x;
    cin >> n >> x;
    vector<char> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int l = 0;
    for (int i = x - 2; i >= 0; i--) { 
        if (v[i] == '#') {
            l = i + 2; 
            break;
        }
    }

    int r = n + 1;
    for (int i = x; i < n; i++) {
        if (v[i] == '#') {
            r = i + 1; 
            break;
        }
    }

    if (l == 0 || r == n + 1) { 
        cout << 1 << nl;
        return;
    }

    int rm = min(x, n - r + 2); 
    int lm = min(l, n - x + 1); 
    int ans = max(rm, lm);

    cout << ans << nl;
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
