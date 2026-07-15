#include <bits/stdc++.h>
using namespace std;

string s[108];
//tut

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        s[i] = "A";
        s[i][0] = char('A' + (i - 1) % 26);
        //s[i] = string(1, char('A' + (i - 1) % 26));
        //for making distinct names ,,
        
    }

    for (int i = 1; i <= n - m + 1; i++) {
        string s1;
        cin >> s1;
        if (s1[0] == 'N') {
            s[i + m - 1] = s[i];
        }
    }

    for (int i = 1; i <= n; ++i) cout << s[i] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}










