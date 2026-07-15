#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if (a + c >= x && b + c >= y && a + b + c >= x + y){
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