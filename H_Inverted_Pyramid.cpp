#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void printPyramid(int tr, int cur) {
    if (cur < 1) return;
    for (int i = 0; i < tr - cur; i++) {
        cout << " ";
    }

    for (int i = 0; i < 2 * cur - 1; i++) {
        cout << "*";
    }

    cout << nl;

    printPyramid(tr, cur - 1);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    printPyramid(n, n);

    return 0;
}