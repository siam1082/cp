#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
int countVowels(const string &s, int i) {
    if (i == s.length()) {
        return 0;
    }
    char ch = tolower(s[i]);    
    int isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? 1 : 0;
    return isVowel + countVowels(s, i + 1);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
 
    getline(cin, s);

    cout << countVowels(s, 0) << nl;

    return 0;
}