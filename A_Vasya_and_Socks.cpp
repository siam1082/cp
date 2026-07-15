#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int d = 0, s = n;
    while (s > 0) {
        d++;
        s--;
        if (d % m == 0) s++;
    }
    cout << d << endl;
    return 0;
}