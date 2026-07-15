#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
void solve() {
    int n;
    cin >> n;
    vector<char> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    vector<pair<char,int>> sbstr; 
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) count++;
        else {
            sbstr.push_back({s[i-1], count});
            count = 1;
        }
    }
    sbstr.push_back({s[n-1], count});

    if (sbstr.size() == 1) {
        cout << -1 << nl;
        return;
    }

  
    int cnta = 0, cntb = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') cnta++;
        else cntb++;
    }

    if (cnta == cntb) {
        cout << 0 << nl;
        return;
    }

    int d = 0;
    bool ok = false;

    if (cnta > cntb) {
        d = cnta - cntb;
        for (auto &x : sbstr) {
            if (x.first == 'a' && x.second == d) {
                ok = true;
                break;
            }
        }
    } else { 
        d = cntb - cnta;
        for (auto &x : sbstr) {
            if (x.first == 'b' && x.second == d) {
                ok = true;
                break;
            }
        }
    }

    if (ok) cout << d << nl;
    else cout << -1 << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
