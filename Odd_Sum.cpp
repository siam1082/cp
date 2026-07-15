#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(int t ){
    int n , m , sum = 0 ;
    cin >> n >> m;
    for(int i = n ; i <= m ; i ++){
        if(i % 2 != 0 ) sum += i;
    }
    cout << "Case " << t << ": " << sum << nl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        magic(i);
    }
    return 0;
}