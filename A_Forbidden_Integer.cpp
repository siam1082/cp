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
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES" << nl;
            cout << n << nl;
            for (int i = 0; i < n; i++) {
                cout << "1 ";
            }
            cout << nl; 
        } 
        else if (k == 1 || (k == 2 && n % 2 == 1)) {
            cout << "NO" << nl;
        } 
        else {
            cout << "YES" << nl;
            if (n % 2 == 0) {
                cout << n / 2 << nl;
                for (int i = 0; i < n / 2; i++) {
                    cout << "2 ";
                }
                cout << nl;
            } 
            else {
                cout << n / 2 << nl;
                cout << "3 ";
                for (int i = 0; i < (n / 2) - 1; i++) {
                    cout << "2 ";
                }
                cout << nl;
            }
        }
    }

    return 0;
}
