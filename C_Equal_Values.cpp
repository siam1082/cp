#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

    void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); 

    ll cost = LLONG_MAX;
    for (ll i = 0; i < n; i++) {
        ll cur = 0;
        cur += v[i] * i;

        ll j = i;
        while (j + 1 < n && v[j] == v[j + 1]) {
            j++;
        }

        cur += (n - j - 1) * v[i];
        cost = min(cost, cur);

        i = j; 
    }

    cout << cost << nl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;

    while(t--){
        solve();
    }

}