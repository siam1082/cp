#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char opt;
    cin >> opt;
    string s;
    cin >> s;
    string a = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string b;
    for (char ch : s) {
        int pos = a.find(ch);
        b += (opt == 'R') ? a[pos - 1] : a[pos + 1];
    }
    cout << b;
    return 0;
}
