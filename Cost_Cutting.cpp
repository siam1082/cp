#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(int t ){
    vector<int> v(3);
    for(int i = 0 ; i < 3 ; i ++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << "Case " << t << ": " << v[1] << nl;

}
int32_t main(){
    ios::sync_with_stdio(false);
        cin.tie(0);
        int t ;
        cin >> t;
        for(int i = 1 ; i <= t ; i ++){
            magic(i);
        }
    return 0;
}