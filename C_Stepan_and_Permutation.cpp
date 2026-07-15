#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int x , n , m ; 
    cin >> x >> n >> m;
    vector <int> v(x);
    for(int i = 0 ; i < n ; i ++){
        cin >> v[i];
    }
    bool ok = false ;
    
    for(int i = 0 ; i< n -1 ; i++){
        if(v[i] < v[i+1]) ok = true; 

    }
    if(ok ){
        cout << "YES" << nl;
        }
    
    for(int i = 0 ; i< n -1 ; i++){
        if(v[i] > v[i+1]) ok = true; 

    }
        if(ok ){
        cout << "YES" << nl;
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