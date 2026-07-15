#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
int dp[201]; 
void p() {
    dp[1] = 1;
    for (int x = 1; x < 100; x++) {
        if (2 * x <= 200) {
            dp[2 * x] = (dp[x] * dp[x]) + 1;
        }
        if (2 * x + 1 <= 200) {
            dp[2 * x + 1] = (dp[x] * dp[x + 1]) + 2;
        }
    }
}

void magic(int tc) {
    int tar;
    cin >> tar;
    int ans = -1;
    for (int i = 1; i <= 200; i++) {
        if (dp[i] == tar) {
            ans = i;
            break;
        }
    }
    cout << "Case " << tc << ": " << ans << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    p();
    int t;
    cin >> t;
    // while(t--){
    for(int i = 1 ; i <= t ; i++){
        magic(i);
    }
    return 0;
}
