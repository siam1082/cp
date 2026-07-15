#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string s1 = "Timur";
        sort(s.begin(), s.end());
        sort(s1.begin(), s1.end());

        if (n == 5 && s == s1) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
