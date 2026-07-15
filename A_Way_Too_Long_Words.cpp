#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    if (n < 10) {
        cout << s << nl;
    } else {
        cout << s[0] << n - 2 << s[n - 1] << nl;
    }
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