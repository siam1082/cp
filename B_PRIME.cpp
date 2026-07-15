#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    long long sum = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) sum += i;
    }

    cout << sum << nl;
    return 0;
}