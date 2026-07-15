#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
int mergee(vector<int> &v, vector<int> &tmp, int l, int mid, int r) {
    int i = l;
    int j = mid + 1;
    int k = l;
    int inv = 0;

    while (i <= mid && j <= r) {
        if (v[i] <= v[j]) {
            tmp[k++] = v[i++];
        }
        else {
            tmp[k++] = v[j++];
            inv += (mid - i + 1);
        }
    }

    while (i <= mid) tmp[k++] = v[i++]; // extra thakle left e 
    while (j <= r) tmp[k++] = v[j++]; // right e

    for (int x = l; x <= r; x++) {
        v[x] = tmp[x];
    }

    return inv;
}

int magic(vector<int> &v, vector<int> &tmp, int l, int r) {
    if (l >= r) return 0;

    int mid = (l + r) / 2;
    int inv = 0;

    inv += magic(v, tmp, l, mid);
    inv += magic(v, tmp, mid + 1, r);
    inv += mergee(v, tmp, l, mid, r);

    return inv;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;

        vector<int> v(n);
        vector<int> tmp(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        cout << magic(v, tmp, 0, n - 1) << nl;
    }

    return 0;
}