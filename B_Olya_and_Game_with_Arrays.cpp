#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void solve(){

    int n;
    cin>>n;
    vector<int>a,b;
    while(n--){
        int k;
        cin>>k;
        vector<int>v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        a.push_back(v[0]);
        b.push_back(v[1]);


    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0;
    ans+=a[0];
    for(int i=1;i<b.size();i++){
        ans+=b[i];
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