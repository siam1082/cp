#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void tea(const string& s) {
    int l = s.length();
    if (l < 3) {
        cout << "No" << nl;
    } else if (s.substr(l - 3) == "tea") {
        cout << "Yes" << nl;
    } else {
        cout << "No" << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
        string s;
        cin >> s;
        tea(s);
    

    return 0;
}