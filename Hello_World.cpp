#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(int n, int t) {
    int cur = 1;
    int ans = 0;

    while (cur < n) {
        cur *= 2;
        ans++;
    }
    cout << "Case " << t << ": " << ans << nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int t = 1;
    while (cin >> n && n >= 0) {
        magic(n, t);
        t++;
    }
    return 0;
}