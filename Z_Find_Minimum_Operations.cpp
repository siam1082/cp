#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic() {
    int n, m;
    cin >> n >> m;

    int ans = 0;     
    
    if (m == 1) {
        cout << n << nl;
        return;
    }
    // while (x > 0) {

    //     int p = 1;
    //     while (p <= x / m) p *= m;   

    //     x -= p;
    //     ans++;
    // }
    while (n > 0) {
        ans += n % m;
        n /= m;
    }
        cout<<ans<<nl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        magic();
    }
    return 0;
}