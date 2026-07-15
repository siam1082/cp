#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin >> n;

    vector<int> p, k;
    int sum = n * (n + 1) / 2;

    for (int i = 0; i < n; i++) {
        p.push_back(i + 1);
    }

    if (sum % 2 == 0) {
        cout << 0 << '\n';
        sum /= 2;
        int curr = 0;
        for (int i = n; i > 0; i--) {
            if (curr + i <= sum) {
                curr += i;
                k.push_back(i);
            }
        }
    }
    else{
        cout << 1 << '\n';
        sum /= 2;
        int curr = 0;
        for (int i = n; i > 0; i--) {
            if (curr + i <= sum) {
                k.push_back(i);
                curr += i;
            }
        }
    }

    cout << k.size() << " ";
    for(auto &m : k) cout << m << " ";

    return 0;
}

