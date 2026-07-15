#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(),v.end());
    for(int i=1;i<n-1;i+=2){
        if(v[i]!=v[i+1]){
            cout<<"NO"<<nl;
            return;
        }
    }
    cout<<"YES"<<nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}