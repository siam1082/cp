#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    vector<int> a(4);
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    int b = a[0];
    sort(a.begin(), a.end());

    auto it = find(a.begin(), a.end(), b);
    if (it != a.end()) {
        cout << distance(a.begin(), it) << nl;
    } else {
        cout << -1 << nl; // Optional: if not found
    }
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
