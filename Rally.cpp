#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin >> n;
    vector<int>x(n);
    for(int i =  0 ; i < n ; i ++){
        cin >> x[i];
    }
    int ans = 1e9; 
    for (int p = 1; p <= 100; p++) {
        int cur = 0;
        for (int i = 0; i < n; i++) {
            cur += (x[i] - p) * (x[i] - p);
        }
     ans = min ( ans, cur);
    }
    cout << ans << nl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

  
        magic();
    return 0;
}