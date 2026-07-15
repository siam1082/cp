#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    k--; 

    vector<int> h(n);
    for (int &x : h) cin >> x;

    int maxH = *max_element(h.begin(), h.end());

    if (h[k] == maxH) {
        cout << "YES" << nl;
        return;
    }
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(h[i]);
    }

    int x = h[k];
    bool ok = true;
    int p=x;

    for (auto val: s) {
        if (val- p > x) {
            ok = false;
            break;
        }
        p = val; 
    }

    cout << (ok ? "YES" : "NO") << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}