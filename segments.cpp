#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m + 2, 0);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        a[x]++;
        if (y + 1 <= m)
            a[y + 1]--;
    }

    vector<int> ans;
    int pSum = 0;

    for (int i = 1; i <= m; i++) {
        pSum += a[i];
        if (pSum == 0)
            ans.push_back(i);
    }

    cout << ans.size() << nl;

    for (int x : ans)
        cout << x << " ";
    cout<< nl; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    magic();

    return 0;
}