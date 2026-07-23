#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic() {
    string s;
    cin >> s;

    int pref0 = 0, pref1 = 0;
    int suf0 = 0, suf1 = 0;

    for (char c : s) {
        if (c == '0') suf0++;
        else if (c == '1') suf1++;
    }

    int ans = min(suf0, suf1);

    for (char c : s) {
        pref0 += (c == '0');
        suf0 -= (c == '0');
        pref1 += (c == '1');
        suf1 -= (c == '1');

        ans = min(ans, pref1 + suf0);
        ans = min(ans, pref0 + suf1);
    }

    cout << ans << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        magic();
    }
    return 0;
}