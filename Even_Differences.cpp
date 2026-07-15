#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n;
    cin >> n;
    int cn = 0 , cnt = 0;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (val % 2 == 0) {
            cn++;
        } else {
            cnt++;
        }
    }
    cout << min(cn , cnt) << nl;
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