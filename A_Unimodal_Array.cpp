#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int a[1010];
    for (int i = 0; i < n; i++) cin >> a[i];

    int i = 1;

   
    for (; i < n; i++) {
        if (a[i] <= a[i - 1]) break;
    }

   
    for (; i < n; i++) {
        if (a[i] != a[i - 1]) break;
    }


    for (; i < n; i++) {
        if (a[i] >= a[i - 1]) break;
    }

    if (i == n) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
