#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n;
    cin >> n;
    int cn = 0,cnt= 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s == "START38") {
            cn++;
        } else if (s == "LTIME108") {
            cnt++;
        }
    }  
    cout << cn << " " << cnt << nl;
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