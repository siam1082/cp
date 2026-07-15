#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i <n ; i++){
        cin >> v[i];
    }
    if(n  == 1) cout << 1 << nl;
    else{
        for(int i = 0 ; i < n ; i++){
            cout << 2 << " ";
        }
        cout << nl;
        
    }
 
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