#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
// tut
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;

    }
    ll r=0;
    ll cnt=0;
    ll s=0;
    for(auto &x:mp){
        cnt=x.second;
        if(cnt>=3){
            r+=cnt*(cnt-1)*(cnt-2)/6;

        }
        if(cnt>=2){
            r+=(cnt*(cnt-1)/2)*s;
        }
        s+=cnt;
    }
    cout<<r<<nl;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;

    while(t--){
        solve();
    }

}