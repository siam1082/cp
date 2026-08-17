#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl "\n"
void magic() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
   
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int bea = a[0] + n - 1;
    int ver = b[0] + m - 1;

    if (bea >= ver)
        cout << 1 << nl;
    else
        cout << 2 << nl;
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