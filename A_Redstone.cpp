#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]); 
    }

    if (n == (int)s.size()) {
        cout << "NO" << nl;  
    } else {
        cout << "YES" << nl; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

