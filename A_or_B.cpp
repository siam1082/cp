#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic() {
    int n, m;
    cin >> n >> m;
    int A = (500 - 2 * n) + (1000 - 4 * (n + m));
    int B = (1000 - 4 * m) + (500 - 2 * (n + m));
    cout << max(A, B) <<nl;
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