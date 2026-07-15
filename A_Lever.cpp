#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int &x : A) cin >> x;
    for (int &x : B) cin >> x;

    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] > B[i]) {
            sum += A[i] - B[i];
        }
    }

    cout << sum + 1 << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}