#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        unordered_set<char> ss;
        for (auto c : s) {
            ss.insert(c);
        }
        if (s.size() > ss.size()) {
            cout << "NO" << '\n';
            continue;
        }

        sort(s.begin(), s.end());

        bool ok = true;
        for (int i = 0; i < (int)s.size() - 1; i++) {
            if (s[i] + 1 != s[i + 1]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << "YES" << '\n';
        }
        else cout << "NO" << '\n';
    }
    return 0;
}





