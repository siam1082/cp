#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b&& b==c&&c==d &&d==a){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
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