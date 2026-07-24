#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(vector<int> &v, int t) {
    int n = v.size() - 1;
    vector<int> pref1(n + 1, 0),pref2(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref1[i] = pref1[i - 1] + v[i];
    }
    vector<int> u = v;
    sort(u.begin() + 1, u.end());
    for (int i = 1; i <= n; i++) {
        pref2[i] = pref2[i - 1] + u[i];
    }
    while (t--) {
        int x, l, r;
        cin >> x >> l >> r;
        if (x == 1) {
            cout << pref1[r] - pref1[l - 1] << nl;
        } else {
            cout << pref2[r] - pref2[l - 1] << nl;
        }
    }
}
int32_t main() {
 
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int t;
    cin >> t;
    magic(v, t);

    return 0;
}