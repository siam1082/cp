#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin >> n ;
    vector<int>v(n);
    for(int i =0 ; i <n ; i ++){
        cin >> v[i];
    }
    int m = INT_MIN;
    for(int i = 0 ; i <n ; i ++){
        for(int j = i +1; j <n ; j++){
            m = max(m, v[i] ^ v[j]);
        }
    }
    cout<< m << nl;
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