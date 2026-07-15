#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n;
    cin>>n;
    if(n%3==0){
        cout<<0<<nl;
        return;
    }
    int l=n%3;
    cout<<3-l<<nl;

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