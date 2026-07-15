#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
using pii = pair<int, int>;
//comn
void magic() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n + 1), pre(n + 1, 0);
    int res = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            res += arr[i];
            arr[i] = 0;
        }
        pre[i] = pre[i - 1] + arr[i];
    }
    int mx = 0;
    for (int i = 1; i <= n - k + 1; i++) {
        mx = max(mx, pre[i + k - 1] - pre[i - 1]);
    }

    cout << res + mx << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    magic();

    return 0;
}
