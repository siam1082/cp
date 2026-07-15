#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int x = 0;
    for(int i = 0; i < n - 1; i++){
        x += max(v[i], v[i + 1]);
    }
    x+=max(v[0],v[n-1]);
    //int m = *max_element(v.begin(), v.end())
    sort(v.begin(),v.end());

    cout << x - v[n-1] << nl;
}
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}