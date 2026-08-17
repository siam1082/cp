#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
int p, q, r, s ,t, u ;
double fnc(double x){
    return p * exp(-x)
         + q * sin(x)
         + r * cos(x)
         + s * tan(x)
         + t * x * x
         + u;
}
void magic() {
    if (fnc(0) * fnc(1) > 0) {
        cout << "No solution" << nl;
        return;
    }
    double l = 0, h = 1;
    for (int i = 0; i < 100; i++) {
        double m = (l + h) / 2.0;

        if (fnc(m) > 0)
            l = m;
        else
            h = m;
    }

    cout << fixed << setprecision(4) << l << nl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> p >> q >> r >> s >> t >> u) {

        magic();
    }
    return 0;
}