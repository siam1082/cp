#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic() {
    int n, m;
    cin >> n >> m;
    set<char> str;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        str.insert(toupper(s[0]));
    }
    bool ok = true;
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        for (char c : s) {
            if (!str.count(toupper(c))) {
                ok = false;
                break;
            }
        }

    
    }
    cout << (ok ? "YES" : "NO") << nl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        magic();
    }
    return 0;
}