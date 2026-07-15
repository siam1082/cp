#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n , sum = 0 , rs= 0 ;
    cin >> n ;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        
    }
    for(int i = 0 ; i < n ; i++){
        sum += v[i];
        rs += (i + 1);
        if(sum < rs){
            cout << "NO" << nl;
            return ;
        }
        
        // cout << sum << nl;
        
        // if(sum >= 0 && i == n - 1){
        //     cout << "YES" << nl;
        //     return ;
        // }

    }
    cout << "YES" << nl;



 
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