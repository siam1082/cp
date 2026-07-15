#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
     ll m;
    cin >> n >> m;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;
    int i = n - 1;
    while (i >= 0) {
        if (a[i] >m) {
            ans++;
            i--; 
        } else {
            i--;
           
            for (int j = 0; j <= i; j++) {
                a[j] *= 2;
            }
           
           
           
        }
    }

    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}

