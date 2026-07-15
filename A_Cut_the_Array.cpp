#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) pref[i + 1] = pref[i] + v[i];

    for (int l = 1; l <= n - 2; ++l) {
        for (int r = l + 1; r <= n - 1; ++r) {
            int s1 = (pref[l]  + 3) % 3;           
            int s2 = ((pref[r] - pref[l])  + 3) % 3;    
            int s3 = ((pref[n] - pref[r])  + 3) % 3;     

            if (s1 == s2 && s2 == s3) {
                cout << l << " " << r << "\n";
                return;
            }
            if (s1 != s2 && s2 != s3 && s3 != s1) {
                cout << l << " " << r << "\n";
                return;
            }
        }
    }
    cout << 0 << " " << 0 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}