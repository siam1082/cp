#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int target;
    cin >> target;
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    int a = -1, b = -1;
    while (l < r) {
        int sum = v[l] + v[r];
        if (sum == target) {
            a = v[l];
            b = v[r];
            l++;
            r--;
        }
        else if (sum < target) {
            l++;
        }
        else {
            r--;
        }
    }
    cout << "Peter should buy books whose prices are "
         << a << " and " << b << "." << nl << nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n) {
        magic(n);
    }

    return 0;
}