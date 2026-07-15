#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    ll k,x;
    cin>>k>>x;
    //ll m=pow(2,k+1);
    ll m = 1LL<<(k+1);
    ll y=m-x;
    // if(y==x){
    //     cout<<0<<nl;
    //     cout<<nl;
    //     return;
    // }
    

    vector<ll>v;
while(x!=y){
    if(x>y){
        x-=y;
        y=y*2;
        v.push_back(2);
    }
    else{
        y-=x;
        x=x*2;
        v.push_back(1);
    }
}
cout<<v.size()<<nl;
for(ll i=(ll)v.size()-1;i>=0;i--){
    cout<<v[i]<<" ";
}
cout<<nl;


}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >>t;

    while(t--){
        solve();
    }

}