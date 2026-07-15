#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n;
    cin >> n;
    vector<int> a(n);
    bool z = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) z = true;
    }
    if(z){
        cout << 0 << nl;
        return ;
    }
    int ans = 1;
    int lt = 1000000000000000000LL;
     for (int i = 0; i < n; i++) {
        if (a[i] > lt / ans) {
            cout << -1 << nl;
            return ;
        }
        ans *= a[i];
    }
 cout << ans << nl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
        magic();
    
    return 0;
}