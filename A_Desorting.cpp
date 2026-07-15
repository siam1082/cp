#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
 
    int n ;
    cin >> n ;
    vector<int> v(n);
    for(int i =0 ; i< n; i++){
        cin >> v[i];

    }
    int m = INT_MAX;
    for(int i = 0; i < n-1 ; i++ ){
        m = min(m, v[i+1] - v[i]);
        if(m < 0) {
            cout << 0 << nl;

            return ;
        }

    }
    int ans = m/2;
    cout << ans + 1 << nl;
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