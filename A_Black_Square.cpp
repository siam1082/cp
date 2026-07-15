#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') sum += a;
        else if (s[i] == '2') sum += b;
        else if (s[i] == '3') sum += c;
        else if (s[i] == '4') sum += d;
    }

    cout << sum << nl;
}
