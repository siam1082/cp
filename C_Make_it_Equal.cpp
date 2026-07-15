#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n), v1(n), v2(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            v1[i] = min(a[i] % k, (k - (a[i] % k)) % k);
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            v2[i] = min(b[i] % k, (k - (b[i] % k)) % k);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (v1[i] != v2[i]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}

