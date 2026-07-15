#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    nth_element(v.begin(), v.begin() + k, v.end(), greater<int>());

    ll sum = accumulate(v.begin(), v.begin() + k + 1, 0LL);

    cout << sum << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
