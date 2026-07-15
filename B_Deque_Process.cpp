#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    ll n;
    cin >> n;

    deque<ll> dq;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        dq.push_back(x);
    }

    string st = "";
    bool pickSmall = true; 

    while (!dq.empty()) {
        ll a = dq.front();
        ll b = dq.back();

        if (pickSmall) {
            if (a < b) {
                st += 'L';
                dq.pop_front();
            } else {
                st += 'R';
                dq.pop_back();
            }
        } else {
           
            if (a > b) {
                st += 'L';
                dq.pop_front();
            } else {
                st += 'R';
                dq.pop_back();
            }
        }

        pickSmall = !pickSmall; 
    }

    cout << st << nl;
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


