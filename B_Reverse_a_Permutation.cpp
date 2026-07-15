#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }

        int i;
        // find first mismatch
        for (i = 1; i <= n; i++) {
            if (p[i] != n - i + 1) {
                break;
            }
        }

        // if already maximum
        if (i > n) {
            for (int k = 1; k <= n; k++) {
                cout << p[k] << " ";
            }
            cout << "\n";
            continue;
        }

        int target = n - i + 1;
        int j = i;
        while (p[j] != target) {
            j++;
        }

        // reverse [i, j]
        reverse(p.begin() + i, p.begin() + j + 1);

       
        for (int k = 1; k <= n; k++) {
            cout << p[k] << " ";
        }
        cout << "\n";
    }

    return 0;
}
