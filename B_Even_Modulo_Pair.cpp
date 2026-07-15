#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        if (v[i] == 0) continue;
        for (int j = i + 1; j < n; j++) {
            int r = v[j] % v[i];
            if (r % 2 == 0) {
                cout << v[i] << " " << v[j] << nl;
                return; 
            }
        }
    }
    
    cout << -1  << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
