#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long ans;

        if (a % 2 == 1 && b % 2 == 1) {
            ans = a * b + 1;
        }
        else if (a % 2 == 0 && b % 2 == 0) {
            ans = a * (b / 2) + 2;
        }
        else if (a % 2 == 1 && b % 4 == 0) {
            ans = a * (b / 2) + 2;
        }
        else {
            ans = -1;
        }

        cout << ans << endl;
    }
    return 0;
}
