#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> v(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> v[i];
    }

    long long t = 0, s = 0;
    long long d = n;

    t = d * (d + 1) / 2;

    for (int i = 0; i < n - 1; i++) {
        s += v[i];
    }

    cout << t - s;
    return 0;
}
