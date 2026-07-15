#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    if (n % 7 == 0) {
        cout << n << nl;
    } else {
        int d = n % 10;
        n = n / 10;
        for (int i = 0; i <= 9; i++) {
            if ((n * 10 + i) % 7 == 0) {
                cout << n * 10 + i << nl;
                return;
            }
        }
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
}
