#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
    int n, k; 
    cin >> n >> k;
    
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    
    int sum = accumulate(a.begin(), a.end(), 0LL);
    
    sort(a.begin(), a.end());
    a[n - 1]--;
    sort(a.begin(), a.end());
    
    if (a[n - 1] - a[0] > k || sum % 2 == 0) {
        cout << "Jerry" << endl;
        return;
    }
    cout << "Tom" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
