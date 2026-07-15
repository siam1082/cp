#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic() {
    int a, b, sum;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;
        int cnt = 0,cr =0;
        while (a > 0 || b > 0) {
            sum = a % 10 + b % 10 + cr;
            if (sum >= 10) {
                cnt++;
                cr = 1;
            } else {
                cr = 0;
            }
            a /= 10;
            b /= 10;
        }
        if (cnt == 0)
            cout << "No carry operation." << nl;
        else if (cnt == 1)
            cout << "1 carry operation." << nl;
        else
            cout << cnt << " carry operations." << nl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    magic();

    return 0;
}