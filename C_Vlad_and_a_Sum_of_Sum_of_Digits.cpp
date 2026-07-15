#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int M = 200000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> dp(M+1,0);
    for (ll i=1; i<=M; i++) {
        ll a=i, s=0;
        while (a>0) {
            s += a%10;
            a /= 10;
        }
        dp[i] = s + dp[i-1];
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }
    return 0;
}

