#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;

    bool ok = false;
    int ans = -1;

    for (int i = 1; i < 60; i++) { 
        ll val = pow(n, i);
        // cout<<val<<nl;

        if (val == m) {
            ok = true;
            ans = i;
            // cout<<ans<<nl;
            break;
            
        }
        if (val > m)
        { 
            break;
        }

    }

    if (ok) {
        cout << "YES" << nl;
        cout << ans - 1 << nl; 
    } else {
        cout << "NO" << nl;
    }

    return 0;
}