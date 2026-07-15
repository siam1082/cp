#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long

void magic(){
    ll n;
    cin >> n;
    unordered_set<ll>a;
    //tut 
    for(ll i = 1; i*i*i <= n; i++){
        a.insert(i*i*i);
    }

    for(ll i = 1; i*i*i <= n; i++){
        ll rem = n - i*i*i;
        if(a.count(rem)){ 
            cout << "YES" << nl;
            return;
        }
    }
    cout << "NO" << nl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        magic();
    }
    return 0;
}
