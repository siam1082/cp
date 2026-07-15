#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));

    int mx = INT_MIN;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
            mx = max(mx, mat[i][j]);
        }
    }

    vector<int> r(n, 0), c(m, 0);
    int cnt = 0;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == mx) {
                r[i]++;
                c[j]++;
                cnt++;
            }
        }
    }

    int ok = 0;
 
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            int cov = r[i] + c[j] - (mat[i][j] == mx ? 1 : 0);
            if (cov == cnt) {
                ok = 1;
                break;
            }
        }
    }

    cout << mx - ok << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
