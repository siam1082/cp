#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

void solve() {
    long long len, tab, num;
    cin >> len >> tab >> num;

    if (len == tab || num == 1 || len/num>=tab) {
        cout << 1 << nl;
        return;
    } else if (tab != 0 && len / tab ==num && len % tab == 0) {
        cout << 1 << nl;
        return;
    } else {
        cout << 2 << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}



