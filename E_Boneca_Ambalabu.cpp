#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt[30] = {0};


    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < 30; j++) {
            if ((a[i] >> j) & 1) {
                cnt[j]++;
            }
        }
    }

    ll max_sum = 0;

    for (int k = 0; k < n; k++) {
        ll res = 0;
        for (int j = 0; j < 30; j++) {
            if ((a[k] >> j) & 1) {
               
                res += (ll)(n - cnt[j]) * (1LL << j);
            } else {
             
                res += (ll)cnt[j] * (1LL << j);
            }
        }
        max_sum = max(max_sum, res);
    }

    cout << max_sum << nl;
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



