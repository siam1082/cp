#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc ;
    cin >> tc;
    while(tc--){
    int n, q;
    cin >> n >> q;
    vector<int> v(n), pre(n + 1);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    pre[0] = 0;
    for(int i = 0; i < n; i++){
        pre[i + 1] = pre[i] + v[i];
    }
    // cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << pre[r + 1] - pre[l] << nl;
    }
    cout << nl;
    }
    return 0;
}