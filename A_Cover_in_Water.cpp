#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;  
    vector<char> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int cnt = 0;
    int cn = 0;
    
   
    for (int i = 0; i <= n - 3; i++) { 
        if (v[i] == '.' && v[i+1] == '.' && v[i+2] == '.') {
            cout << 2 << nl; 
            return;  
        }
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == '.') {
            cn++;
        }
    }
    
    cout << cn << nl;  
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
