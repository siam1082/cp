#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
// nL Khalid
void solve(){
    //const ll N = LLONG_MAX;


    int n,x;
    cin >> n;
    int g=0,  i=1;
    while(n--){
        cin >> x;
    
    g= __gcd(g,x);
    }
  
    while(++i){
        if(__gcd(g,i)==1){
            cout<<i<<nl;
            break;
        }
    }
}
    


    
//     for (ll i = 2; i <= N; i++) {
//         for (auto x : a) {
//             if (gcd(i, x) == 1) {
//                 cout << i << nl;
//                 return;
//             }
//         }
//     }
 


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;

    while(t--){
        solve();
    }

}