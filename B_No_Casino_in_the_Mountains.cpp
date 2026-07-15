#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int c = 0;
    int i = 0;

    while (i <= n - k) { 
        bool ok = true;

        for (int j = 0; j < k; j++) {
            if (v[i + j] != 0) {
                ok = false;
                break;
            }
        }

        if (ok) {
            c++;
            i += k+1;
          
        } else {
            i++;
        }
    }

    cout << c << nl;
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