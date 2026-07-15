#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n,k;
    cin>>n>>k;
    if(n==1 || k==1){
        cout<<"NO"<<nl;
        
    }
    else if(n==2 && k==2){
        cout<<"NO"<<nl;
        
    }
    else{
        cout<<"YES"<<nl;
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