#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.length();
    vector<int> pre(n, 0);
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + (s[i] == s[i - 1] ? 1 : 0);
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;      
        cout << pre[r - 1] - pre[l - 1] << nl;
    }
    return 0;
}