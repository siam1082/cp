#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    long double ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != 't') continue;

        for (int j = i + 2; j < n; j++) {
            if (s[j] != 't') continue;

            int x = 0;
            for (int k = i; k <= j; k++) {
                if (s[k] == 't') x++;
            }

            int len = j - i + 1;
            if (len <= 2) continue;

            long double item = (long double)(x - 2) / (long double)(len - 2);
            if (item > ans) ans = item;
        }
    }

    cout.precision(10);
    cout << fixed << ans << endl;
}