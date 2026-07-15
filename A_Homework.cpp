#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;

    string a;
    cin >> a;

    int m;
    cin >> m;

    string v, c;
    cin >> v >> c;

    for (int i = 0; i < m; i++) {
        if (c[i] == 'V') {
            a = v[i] + a; 
        } else if (c[i] == 'D') {
            a += v[i];   
        }
    }

    cout << a << nl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}