#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
//tuf 
int a[1 << 18], seg[4 * (1 << 18)];
int n, m;

void build(int idx, int low, int high, int level) {
    if (low == high) {
        seg[idx] = a[low];
        return;
    }

    int mid = (low + high) / 2;
    build(2 * idx + 1, low, mid, level - 1);
    build(2 * idx + 2, mid + 1, high, level - 1);

    if (level % 2 == 1){
        seg[idx] = seg[2 * idx + 1] | seg[2 * idx + 2];
    }
    else{
        seg[idx] = seg[2 * idx + 1] ^ seg[2 * idx + 2];
    }
}

void update(int idx, int low, int high, int pos, int val, int level) {
    if (low == high) {
        seg[idx] = val;
        return;
    }

    int mid = (low + high) / 2;
    if (pos <= mid){
        update(2 * idx + 1, low, mid, pos, val, level - 1);
    }
    else{
        update(2 * idx + 2, mid + 1, high, pos, val, level - 1);
    }
    if (level % 2 == 1){
        seg[idx] = seg[2 * idx + 1] | seg[2 * idx + 2];
    }
    else{
        seg[idx] = seg[2 * idx + 1] ^ seg[2 * idx + 2];
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    int size = 1 << n;

    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    build(0, 0, size - 1, n);

    while (m--) {
        int p, b;
        cin >> p >> b;
        p--;              
        update(0, 0, size - 1, p, b, n);
        cout << seg[0] << nl;
    }

    return 0;
}
