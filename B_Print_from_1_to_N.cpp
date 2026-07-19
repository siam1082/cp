#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(int i, int n) {
    if (i > n) return;
    cout << i << nl;
    magic(i + 1, n);
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    magic(1, n);
    return 0;
}