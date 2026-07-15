#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int>v(n),c(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int miv=*min_element(v.begin(),v.end());
     int mic=*min_element(c.begin(),c.end());
     int ans=0;
     for(int i=0;i<n;i++){
        ans+=max(v[i]-miv,c[i]-mic);
     }
     cout<<ans<<nl;

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;

    while(t--){
        solve();
    }

}