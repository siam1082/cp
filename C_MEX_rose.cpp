#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);  
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int mis=0;
    int cnt=0;
    
    for(int i=0;i<n;i++){
        if(v[i]==k){
            cnt++;

        }
    }
  

    set<int> s;
    for (int x : v) s.insert(x);


   
    for (int i = 0; i < k; i++) {
        
        if (s.find(i) == s.end()){
            mis++;
        }
    }
    cout<<max(mis,cnt)<<nl;


//     bool ok = s.find(k) != s.end();
//     if (ok) {
//         cnt += 1;
//     }

    // cout << cnt << nl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
