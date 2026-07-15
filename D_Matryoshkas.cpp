#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n; cin >> n;

    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        m[x]++;
    }

    int ans = 0, last = -1, c = 0;

    for (auto &x : m) {
        if (last + 1 != x.first) {
            c = 0;
        }
        ans += max(0LL, (long long)x.second - c);
        c = x.second;
        last = x.first;
    }

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
