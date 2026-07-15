#include <bits/stdc++.h>
using namespace std;
#define ll long long  

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll ans = a[0];
    ll sum = a[0];
    ll mn = min(0LL, sum);
    
    for (int i = 1; i < n; i++) {
      
        if ((a[i] % 2 + 2) % 2 == (a[i - 1] % 2 + 2) % 2) {
            sum = 0;
            mn = 0;
        }

        sum += a[i];
        ans = max(ans, sum - mn);
        mn = min(mn, sum);
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--) solve();
}


