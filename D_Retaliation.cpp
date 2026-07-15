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

    ll d = a[1] - a[0]; 
    bool arr = 0;       

    for (int i = 2; i < n; i++) {
        if (d != (a[i] - a[i - 1])) {
            arr = 1;
            break;
        }
    }

    if (arr) {
        cout << "NO" << nl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (d < 0)
            a[i] = a[i] + d * (n - i);
        else
            a[i] = a[i] - d * (i + 1);
    }

    if (a[0] >= 0 && a[0] % (n + 1) == 0)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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
