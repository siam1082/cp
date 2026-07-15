#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 0) {
            cout << 0 << '\n';
        } else {
            int d = log10(n) + 1; 
            int x = (d - 1) * 9; 

            int l = n - x;

            if (d * 9 < n) {
                cout << -1 << "\n";
                continue;
            }

            cout << l;
            for (int i = 0; i < d - 1; i++) {
                cout << 9;
            }
            cout << "\n";
        }
    }
    return 0;
}
