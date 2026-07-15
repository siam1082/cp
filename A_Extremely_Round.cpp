#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    string s ;
    cin >> s; 
    int x = s[0] - '0';
    int d = s.size();
    int ans = (d - 1) * 9 + x;
    cout << ans << nl;
 
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