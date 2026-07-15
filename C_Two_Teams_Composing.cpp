#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long

void magic() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> mp;                  

    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;               
    }

    int mx = -1;
    for(auto &x: mp){
        mx = max(mx, x.second);    
    }

    int diff = mp.size();          

    
    int ans = max(min(mx - 1, diff), min(mx, diff - 1));    

    cout << ans << nl;            
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        magic();
    }
    return 0;
}
