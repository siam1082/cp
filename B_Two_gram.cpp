#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> mp;

    for (int i = 0; i < n - 1; i++) {
        string s2 = s.substr(i, 2);
        mp[s2]++;
    }

    int ma = -1;
    string ans;
    for (auto &m : mp) {
        if (m.second > ma) {
            ma = m.second;
            ans = m.first;
        }
    }

    cout << ans << '\n';
    return 0;
}
