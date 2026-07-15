#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (auto x : v) {
        int buy = min(m, x.second);
        ans += buy * x.first;
        m -= buy;
       if (m == 0) break;
    }
    cout << ans <<nl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

        magic();
    
    return 0;
}