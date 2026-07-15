
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;


    int ms = (n + 1) / 2;

    for (int s = ms; s <= n; ++s) {
        if (s % m == 0) {
            cout << s << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}