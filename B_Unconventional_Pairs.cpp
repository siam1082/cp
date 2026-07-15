#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int solve(vector<int>& a) {
    sort(a.begin(), a.end());
    int ma = 0;
    for (int i = 0; i < a.size(); i += 2) {
        ma = max(ma, abs(a[i] - a[i+1]));
    }
    return ma;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << solve(v) << nl;  
    }
}
