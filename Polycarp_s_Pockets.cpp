#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin >> n ;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i ++){
        cin >> v[i];
    }
    map<int, int> mp;

    for(int i = 0 ; i < n; i ++ ){
        mp[v[i]]++;
    }
    int m = -1;
    for(auto x: mp){
        m = max(m, x.second);
    }
    cout<< m << nl;

 
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
        magic();
    
    return 0;
}