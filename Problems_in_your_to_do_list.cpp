#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin >> n;
    vector <int > v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
    
    if(v[i] >= 1000)
        cnt ++;
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