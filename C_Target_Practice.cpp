#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic() {
    int n = 10, m = 10;
    vector<vector<char>> a(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 'X') {
                int ring = min({i, j, 9 - i, 9 - j});
                ans += ring + 1;
            }
        }
    }

    cout << ans << nl;
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
