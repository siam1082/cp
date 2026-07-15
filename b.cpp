#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int a,v,l,n;
    cin>>a>>v>>l>>n;
    if(a<=n || v<=n){
        cout<<"NO"<<nl;
    }
    else cout<<"YES"<<nl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}