#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i * 3 <= n; i++) {
        int r = n - i * 3;
        for (int j = 0; j * 5 <= r; j++) {   
            int r2 = r - j * 5;
            if (r2 % 7 == 0) {
                cout << i << " " << j << " " << r2 / 7 << nl;
                return;  
            }
        }
    }
    cout << -1 << nl; 
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
