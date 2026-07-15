#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n, m , c;
    cin >> n >> m >> c;
    vector<int>v(m);
    for(int i = 0 ; i < m ; i++){
        cin >> v[i];
    }
    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        int sum = c;
        for(int j = 0 ; j < m ; j++){
            sum += a[i][j] * v[j];
        }
        if(sum > 0) ans++;
    }
    cout << ans << nl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    magic();

    return 0;
}