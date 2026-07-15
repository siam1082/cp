#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n); 

        for (int i = 0; i < k; i++) {
            v[i] = 1;
        }

        for (auto val : v) {
            cout << val ;
        }
        cout << '\n';
    }
    return 0;
}
