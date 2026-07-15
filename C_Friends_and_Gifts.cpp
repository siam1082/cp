#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    vector<int> b;
    for (int i = 0; i <= n; i++) {
        if (a[i] == 0) {
            b.push_back(i + 1); 
        }
    }


    sort(b.begin(), b.end(), greater<int>());

    int ptr = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            a[i] = b[ptr++];
        }
    }

    for (int x : a) cout << x << " ";
    cout << "\n";

    return 0;
}
