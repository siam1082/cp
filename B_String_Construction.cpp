#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n , k ;
    cin >> n >> k;
    int x = n  - k - 1;
    if(abs((k + 1) - x) > 1 ){
        cout << -1 << nl;
        return ;
    }
    else{
        cout << 2 <<nl;
    }
 
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