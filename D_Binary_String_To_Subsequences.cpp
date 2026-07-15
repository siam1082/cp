#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

void solve() {
    int n;
    string s;
    cin >> n >> s;
    
    vector<int> ans(n);
    vector<int> z, o;
    
    for (int i = 0; i < n; i++) {
        int ns = z.size() + o.size();
        
        if (s[i] == '0') {
            if (o.empty()) {
             
                z.push_back(ns);
            } else {
           
                ns = o.back();
                o.pop_back();
                z.push_back(ns);
            }
        } else { 
            if (z.empty()) {
               
                o.push_back(ns);
            } else {
              
                ns = z.back();
                z.pop_back();
                o.push_back(ns);
            }
        }
        
        ans[i] = ns;
    }
    
    cout << z.size() + o.size() << nl;
    
  
    for (int i = 0; i < n; i++) {
        cout << ans[i] + 1 << " ";
    }
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
