#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    int s = 0;
    int count = 0;  
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s = s + a[i];
        if (a[i] == 0) {
            count++;
        }
    }
    cout << s + count << nl;
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
