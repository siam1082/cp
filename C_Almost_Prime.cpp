#include <bits/stdc++.h>
using namespace std;
//BTHOC

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    if (!(cin >> n)) return 0;

    vector<int> cnt(n + 1, 0);
    vector<bool> isPrime(n + 1, true);
    if (n >= 0) isPrime[0] = false;
    if (n >= 1) isPrime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            for (long long j = 1LL * i; j <= n; j += i) {
                cnt[j]++;
                if (j > i) {
                    isPrime[j] = false; 
             }
            }
        }
    }

    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if (cnt[i] == 2) ans++;
    }
    cout << ans << '\n';
    return 0;
}
