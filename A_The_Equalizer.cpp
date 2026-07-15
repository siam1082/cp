#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    if ((sum % 2) == 0 && (n*k ) % 2 != 0) {
        cout << "NO" << nl;
    } else {
        cout << "YES" << nl;
    }
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