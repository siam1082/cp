#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
     cout << min(2 * a[0], a[0] + a[1]) << nl;
    }



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
