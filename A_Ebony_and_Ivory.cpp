#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, m, k;
    cin >> n >> m >> k;

    if (k % n == 0 || k % m == 0) {
        cout << "Yes\n";
        return 0;
    }

    for (ll i = 0; i * n <= k; i++) {
        ll r= k - i * n;
        if (r>=0 &&  r% m == 0) {
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";
    return 0;
}
