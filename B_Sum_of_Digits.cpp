#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   
    string s;
    cin >> s;
    ll sum = 0;
    int k = 0;

    while (s.size() != 1) {
        for (int i = 0; i < (int)s.size(); i++) {
            sum += (s[i] - '0');
        }
        k++;
        s = to_string(sum);
        sum = 0;
    }

    cout << k << endl;
    return 0;
}
