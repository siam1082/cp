#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s; 

    char sml = '9'; 

    for (char c : s) {
        if (c < sml) {
            sml = c;
        }
    }

    cout << sml << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}