#include <bits/stdc++.h>
using namespace std;

using ll = long long;
// tut shit

ll removeAllTwos(ll x){
    while (x % 2 == 0) x /= 2;
    return x;
}

void solve(){
    ll a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);

    ll ra = removeAllTwos(a);
    if (removeAllTwos(b) != ra){
        cout << -1 << "\n";
        return;
    }

    ll ratio = b / a;
    int ans = 0;

    while (ratio >= 8){
        ratio /= 8;
        ++ans;
    }
    if (ratio > 1) ++ans;

    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}