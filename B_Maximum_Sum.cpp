#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;  
    vector<int> v(n);
    vector<int> sum(n+1);

    
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
      
    }

    sort(v.begin(), v.end());

   
   sum[0] = 0;         
for (int i = 0; i < n; i++) {
    sum[i+1] = sum[i] + v[i];
}

    int ma = 0;  
   
    
  
    for (int i = 0; i <= k; i++) {
      
   
            ma = max(ma, sum[n - k + i] - sum[2 * i]);
              
    }
    

    cout << ma << nl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t; 
    while (t--) {
        solve();  
    }

    return 0;
}
