#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
int magic(vector<int>& v, int i) {
    if (i == v.size() - 1) {
        return v[i];
    }
    return v[i] + magic(v, i + 1);
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << magic(v, 0) << nl;
    return 0;
}