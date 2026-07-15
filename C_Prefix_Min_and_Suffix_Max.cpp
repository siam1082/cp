#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), p(n), s(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

   
    p[0] = a[0];
    for (int i = 1; i < n; i++) {
        p[i] = min(p[i - 1], a[i]);
    }

 
    s[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        s[i] = max(s[i + 1], a[i]);
    }

   
    for (int i = 0; i < n; i++) {
        if (a[i] == p[i] || a[i] == s[i])
            cout << '1';
        else
            cout << '0';
    }
    cout << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
