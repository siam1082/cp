#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ,m ;
    cin >> n >> m;
    if(n % m == 0){
        cout << "YES" << nl;

    }
    else 
    cout << "NO" << nl;
 
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