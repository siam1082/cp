#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long


void magic() {
    int n, m, k;
    cin >> n >> m >> k;

    int x = 5000;
    int ans = -1;

    while (x--) {
        m = (m + k) % n;
        ans = max(ans, m);
    }

   



    // int idx = m % n;  
    // int ans = v[idx];

    // for (int cnt = 0; cnt < n; cnt++) {   
    //     ans = max(ans, v[idx]);
    //     idx = (idx + k) % n;              
    // }

    cout << ans<< nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        magic();
    }
    return 0;
}
