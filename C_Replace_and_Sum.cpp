#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

int query(const vector<int>& a, const vector<int>& b, int l, int r) {
    int s = 0;
    for (int i = l; i <= r; i++) {
        int mx = max(a[i], b[i]);
        if (i + 1 < a.size()) {
            mx = max({mx, a[i + 1],b[i+1]});
        }
        s += mx;
    }
    return s;
}

void magic() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    while (m--) {
        int l, r;
        cin >> l >> r;
        l--, r--;   
        cout << query(a, b, l, r) << " ";
    }
    cout<<nl;
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
