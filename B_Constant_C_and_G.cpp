#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic() {
    int x, h, m, s;
    cin >> x >> h >> m >> s;

    double k = 86400.0 / (h * m * s);

    double c = (3e8 * k) / x;
    double g = (9.8 * k * k) / x;

    cout << fixed << setprecision(0) << c << " ";
    cout << fixed << setprecision(1) << g << nl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        magic();
    }
    return 0;
}