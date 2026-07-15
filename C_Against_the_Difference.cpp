#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int,int> freq;
    for (int x : a) {
        if (x > 0 && x <= n) 
            freq[x]++;        
    }

    ll ans = 0;
    for (int L = 1; L <= n; ++L) {
        int blocks = freq[L] / L;
        ans += 1LL * blocks * L;
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
    return 0;
}
