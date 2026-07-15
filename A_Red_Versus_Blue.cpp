#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

void solve() {
    int n, r, b;
    cin >> n >> r >> b;

    int bhag = r / (b + 1);   
    int rim = r % (b + 1);  
    string ans = "";

    for (int i = 0; i < b + 1; i++) {
        ans.append(bhag, 'R');     
        if (rim > 0) {          
            ans.push_back('R');
            rim--;
        }
        if (i < b) ans.push_back('B');
    }

    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();
}
