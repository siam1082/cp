#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n , k , m;
    cin >> n >> k >> m;
    if(k > m ){
        cout << "NO" << nl;
        return ;
    }
    cout << "YES" << nl;

    vector<int> v;
    int prev = 0 ;
    for(int i = 1 ; i <= n ; i ++){
        int cur = i % k ;
        int val = (cur - prev  + m) % m;
        if(val == 0){
            val = m;
        }
        v.push_back(val);
        prev = cur;
    } 
    
    for(int i = 0 ; i < n ; i ++){
        cout << v[i] << " ";
    }
    cout << nl;
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