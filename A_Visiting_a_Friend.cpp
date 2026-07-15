#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int ma = 0;
    bool ok = true;

    while (n--) {
        int a, b;
        cin >> a >> b;
        
        if (a > ma) {
            ok = false;
            break;
        }
        ma = max(ma, b);

    }

    if (ok && ma == k) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    return 0;
}
