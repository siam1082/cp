#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n;
    cin>>n;
    // if(n<=4) cout<<1<<nl; 
    int l=n/4;
    if(n%4!=0){
        l++;
    }
    cout<<l<<nl;

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