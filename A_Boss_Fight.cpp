#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> freq;
    int sum = 0;
    int m = 0;
    int val = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
        freq[v[i]]++;

        if (freq[v[i]] > m) {
            m = freq[v[i]];
            val = v[i];
        }
    }

    if (m <= (n + 1) / 2) {
        cout << sum << nl;
        return;
    }

    int rt = n - m;
    
    int rsum = sum - m * val;
    cout << rsum +( rt + 2) * val << nl;

    // int p = min(m, 2LL * (rt + 1));

    // cout << rsum + p * val << nl;
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