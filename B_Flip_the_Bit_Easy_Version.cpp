#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n+2);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }
    int x;
    cin >> x;
    v[0] = v[n+1] = v[x];
    int cl = 0, cr = 0;
    for(int i = 0; i < x; i++){
        if(v[i] != v[i+1]){
            cl++;
        }
    }
    for(int i = x; i < n+1; i++){
        if(v[i] != v[i+1]){
            cr++;
        }
    }
    cout << max(cl, cr) << nl;
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