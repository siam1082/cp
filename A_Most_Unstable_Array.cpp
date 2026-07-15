#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n,m;
    cin>>n>>m;
    if(n==1){
        cout<<0<<nl;
    }
    else if(n==2){
        cout<<m<<nl;
    }
    else{
        cout<<m*2<<nl;
    }

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