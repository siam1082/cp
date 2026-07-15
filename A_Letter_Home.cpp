#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << abs(s - a[0]) << nl;
            continue;
        }

       
        int x = min(abs(s - a[0]), abs(a[n - 1] - s)) + abs(a[n - 1] - a[0]);
        cout << x << nl;
    }

    return 0;
}
