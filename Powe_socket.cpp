#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n , m ,s = 1, ans = 0;
    cin >> n>> m;
    while(s < m){
        s += (n - 1);
        ans++;
    }
    cout << ans << nl;
    
 
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
        magic();
    
    return 0;
}