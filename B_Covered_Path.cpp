#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long

void magic() {

    int n, m;
    cin >> n >> m;

    int t, d;
    cin >> t >> d;

    int s = n + m;  

    vector<int> v;
    v.push_back(s);

    if (t < 3) {
        cout << s << nl;
        return;
    }

    while (t > 3) {
        if (n < m) {
            n += d;
            v.push_back(n);
        } else {
            m += d;
            v.push_back(m);
        }
        t--;
    }

  


    cout << accumulate(v.begin(), v.end(), 0LL)+ min(n, m)+d<< nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    magic();
    
    return 0;
}