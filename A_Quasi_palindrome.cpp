#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

  
    while (s.size() > 1 && s.front() == '0')
        s.erase(s.begin());

    while (s.size() > 1 && s.back() == '0')
        s.erase(s.end() - 1);

    int n = s.size();
    bool ok = true;

    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-1-i]) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES\n" : "NO\n");

    return 0;
}
