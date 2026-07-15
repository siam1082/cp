#include<bits/stdc++.h>
using namespace std; 
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    ll s = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        s += b[i];
    }
    ll ans = LLONG_MAX;
    for(int i = 0; i < n; i++){
        ans = min(ans, (ll)a[i] + s - b[i]);
    }
    cout << ans << '\n';
    return 0;
}