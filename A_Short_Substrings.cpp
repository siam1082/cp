#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    string result = "";
    result=s[0];

   
    for (int i = 1; i < s.length(); i += 2) {
        result += s[i];
    }

    cout << result << '\n';
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
