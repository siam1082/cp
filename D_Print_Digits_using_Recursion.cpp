#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void printDigits(int n) {
    if (n == 0) {
        return;
    }
    printDigits(n / 10);
    cout << n % 10 << " ";
}
void magic() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0 << nl;
        return;
    }
    printDigits(n);
    cout << nl; 
}

int32_t main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        magic();
    }
    return 0;
}