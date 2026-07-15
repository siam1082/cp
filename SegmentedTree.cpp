#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define int long long

int a[100005], seg[4 * 100005];

void build(int idx, int low, int high) {
    if (low == high) {
        seg[idx] = a[low];
        return;
    }
    int mid = (low + high) / 2;
    build(2 * idx + 1, low, mid);
    build(2 * idx + 2, mid + 1, high);
    seg[idx] = max(seg[2 * idx + 1], seg[2 * idx + 2]);
}

int query(int idx, int low, int high, int l, int r) {
    if (low >= l && high <= r) {
        return seg[idx];
    }
    if (high < l || low > r) {
        return LLONG_MIN;
    }
    int mid = (low + high) / 2;
    int left = query(2 * idx + 1, low, mid, l, r);
    int right = query(2 * idx + 2, mid + 1, high, l, r);
    return max(left, right);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    build(0, 0, n - 1);

    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << query(0, 0, n - 1, l, r) << nl;
    }

    return 0;
}
