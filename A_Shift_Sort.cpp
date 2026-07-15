#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
   cin>>t;
   
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int z = 0;
        for (char c : s) if (c == '0') ++z;

        int ans = 0;
        for (int i = 0; i < z; ++i) {
            if (s[i] == '1') ++ans;
        }

        cout << ans << "\n";
    }
    return 0;
}