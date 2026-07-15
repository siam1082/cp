#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"

void solve(){
    int n;
    cin >> n;
    vector<int>a(n), b(n);
    int s=0;
    for(int i=0; i<n; i++) 
    {
        cin >> a[i];
         s^=a[i];
    }
    for(int i=0; i<n; i++)
    {
         cin >> b[i];
         s^=b[i];
         
    }
    if(s==0) 
    { 
        cout<<"Tie"<<nl;
        return;
    } 

    // int as = a[0], tmp1;
    // int bs = b[0], tmp2;
    // int asor = 0, bsor = 0;

    // if(as < bs) swap(as, bs);
    // tmp1 = as, tmp2 = bs;

    // for(int i=1; i<n; i++){
    //     if(i % 2 == 0){
    //         as ^= a[i];
    //         tmp1 ^= b[i];
    //         if(as > tmp1) asor += as;
    //         else asor += tmp1;
    //         // as = asor, tmp1 = asor
    //     }
    //     else{
    //         bs ^= a[i];
    //         tmp2 ^= b[i];
    //         if(bs > tmp2) bsor += bs;
    //         else bsor += tmp2;
    //         //  bs = bsor, tmp2 = bsor
    //     }
    // }

    // if(asor < bsor) cout << "Mai" << nl;
    // else cout << "Ajisai" << nl;
    int p=0;
    int cnt = 31 - __builtin_clz(s);
 
    for (int i = n - 1; i >= 0; i--) {
        if ((a[i] ^ b[i]) & (1 << cnt )) {
            p = i % 2;
            break;
        }
    }
   // cout << ((p > 0) ? "Mai" : "Ajisai") << nl;
    //cout << ((p > 0) ? "Ajisai" : "Mai") << nl;
     cout << (p ? "Mai" : "Ajisai")<<nl;


}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}