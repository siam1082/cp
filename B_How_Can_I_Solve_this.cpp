#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
const int M = 998244353;

void magic(){
    int n;
    cin >> n;
    vector<int> v(n);
    // for(int i = 0; i < n; i++){
    //     cin >> v[i];
    // }
    int ans = 1;
    vector<int> f(2001,0);

    for(int i=0;i<n;i++){
        cin >> v[i];
        f[v[i]]++;
        if(f[v[i]] > 1){
            cout << 0 <<nl;
            return ;
        }
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j <n ; j++){
        ans = (ans * (v[i] ^ v[j])) % M;
    }
}

    cout << ans << nl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    magic();
}