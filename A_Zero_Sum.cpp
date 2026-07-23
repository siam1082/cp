#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic() {
    int n, o = 0;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1) o++;
    }

    if (n % 2) {
        cout << "NO" << nl;
    } else {
        if (o % 2 == (n / 2) % 2)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        magic();
    }

    return 0;
}