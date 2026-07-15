#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n, k, t;
    cin >> n >> k >> t;

    int total = (n * k * t) / 100;
    int full = total / k;
    int rem = total % k;

    vector<int> v(n, 0);
    for (int i = 0; i < full; ++i) {
        v[i] = k;
    }

  
    if (full < n) {
        v[full] = rem;
    }


    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

  
    solve();

    return 0;
}