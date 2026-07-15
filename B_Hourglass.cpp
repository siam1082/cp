#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long

void magic() {
    int n, k, m;
    cin >> n >> k >> m;

    int rem = m % k;
    int ans = 0;

    if (n <= k) {
        ans = max(0LL, n - rem);
    } else {
        if ((m % (2 * k)) < k) {
            ans = n - rem;
        } else {
            ans = k - rem;
        }
    }

    cout << ans << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        magic();
    }
    return 0;
}
