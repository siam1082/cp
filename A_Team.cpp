#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
#define int long long

void magic() {
    int n;
    cin >> n;

    int ans = 0;

    while (n--) {
        int cnt = 0;
        for (int i = 0; i < 3; i++) {
            int x;
            cin >> x;
            if (x >= 1) cnt++;
        }
        if (cnt >= 2) {
            ansr++;
        }
    }

    cout << ans << nl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
        magic();
    
    return 0;
}