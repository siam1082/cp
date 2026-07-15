#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
// BB

struct item {
    int L, R, index;
};

void solve() {
    int n;
    cin >> n;
    vector<item> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].L >> a[i].R;
        a[i].index = i;
    }
    sort(a.begin(), a.end(), [](const item &x, const item &y) {
        if (x.L != y.L) return x.L < y.L;
        return x.R > y.R;
    });

    int end = a[0].R;
    int ind = a[0].index;

    for (int i = 1; i < n; i++) {
        if (a[i].R <= end) {
            cout << a[i].index + 1 << ' ' << ind + 1 << nl;
            return;
        }
        if (end <= a[i].R) {
            end = a[i].R;
            ind = a[i].index;
        }
    }

    cout << -1 << ' ' << -1 << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    while (tc--) solve();

    return 0;
}