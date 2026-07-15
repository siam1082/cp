


#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic() {
    int w, h, d, n;
    cin >> w >> h >> d >> n;

    int tmp = n;

    tmp /= __gcd(tmp, w);
    tmp /= __gcd(tmp, h);
    tmp /= __gcd(tmp, d);
    //  if((w*h*x)%n!=0){
    //     cout<<-1<<nl;
    //     return;
    // }

    if (tmp != 1) {
        cout << -1 << nl;
        return;
    }

    int wp = __gcd(n, w);
    int nw = n / wp;

    int hp = __gcd(nw, h);
    int nh = nw / hp;

    int dp = __gcd(nh, d);
    int nd = nh / dp;

    if (nd != 1) {
        cout << -1 << nl;
        return;
    }

    cout << wp - 1 << " " << hp - 1 << " " << dp - 1 << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    magic();
    return 0;
}
