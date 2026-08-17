#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic() {
    int zx;
    string s;
    cin >> zx;
    cin >> s;

    int n = s.size();

    vector<pair<char, int>> v;

    for (int i = 0; i < n;) {
        int j = i;

        while (j < n && s[j] == s[i])
            j++;

        int len = j - i;

        if (len > 1)
            v.push_back({s[i], len - 1});

        i = j;
    }

    int c0 = 0, c1 = 0;

    for (auto x : v) {
        if (x.first == '1')
            c1 += x.second;
        else
            c0 += x.second;
    }

    // int ma = max(c1, c0);
    // int ans = ma - ;
    int xz= 0;
    if(c1 > c0){
        xz = c1 - c0;

        
    }
    if(xz>1){
        if(c1 + c0 +1 > zx -1){
            cout << -1 << nl;
        }
        else{
            cout << 
        }
    }

    if (ans >= zx) {
        cout << -1 << nl;
    } else {
        cout << ans << nl;
    }
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