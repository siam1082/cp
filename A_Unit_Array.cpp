#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin >> n;
    vector<int >v(n);
    int m =0 , p = 0;
    for(int i = 0 ; i < n ; i++){
        
        cin >> v[i];
        if(v[i] < 0) m ++;
        else p ++;

    }
     int cnt = 0;
     
    while (p < m || m % 2 == 1){
        p++;
        m--;
        cnt++;

    }
    cout << cnt << nl;

  

 
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