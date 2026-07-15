#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll n1 = n;
    ll r = 0;

    while (n1 > 0) {
        ll d = 1;    
        int c = 0;

       
        while (d * 3 <= n1) {
            d *= 3;
            c++;
        }

       
        ll cost;
        if (c == 0)
            cost = 3;
        else {
            ll p1 = 1, p2 = 1;
            for (int i = 0; i < c + 1; i++) p1 *= 3;
            for (int i = 0; i < c - 1; i++) p2 *= 3;
            if (c == 1) p2 = 1;
            cost = p1 + c * p2;
        }

        r += cost;
        n1 -= d;   
    }

    cout << r << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
