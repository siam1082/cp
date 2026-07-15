#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    ll px, py, qx, qy, sum = 0;
    cin >> px >> py >> qx >> qy;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    double d2 = sqrt((px - qx)*(px - qx) + (py - qy)*(py - qy));
    sort(a.begin(),a.end());


    if (sum < d2) {
        cout << "NO" << nl;
        return;
    }
    if (sum -a[n-1]+d2 <a[n-1]) {
        cout << "NO" << nl;
        return ;
    }
    else {
        cout << "YES" << nl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
