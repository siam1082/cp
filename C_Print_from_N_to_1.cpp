#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(int n) {
    if (n <=0) return;
    cout << n  ;
    if (n > 1) {
        cout << " ";
    }
    magic(n - 1);
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    magic( n);
    return 0;
}