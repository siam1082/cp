#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int s = 0;
    for (int i = 0; i < n-1; i++) {
        cin >> v[i];
    }

   
    for (int i = 0; i < n-1; i++) {
        s += v[i];
    }
    
    cout << -s << nl;  
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
