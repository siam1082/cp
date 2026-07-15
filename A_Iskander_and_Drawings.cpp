#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int tm = 0;
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '#') {
            cnt++;
        } else {
            if (cnt > 0) {
                tm = max(tm, (cnt + 1) / 2);
                cnt = 0;
            }
        }
    }
    if (cnt > 0) {
        tm = max(tm, (cnt + 1) / 2);
    }
    
    cout << tm << nl;
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