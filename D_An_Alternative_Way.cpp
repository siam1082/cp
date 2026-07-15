#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    bool ok = true;
    if(a[0] > b[0]){
      ok = false ;

    }
    
    for(int i = 1; i < n; i++){
        a[i] += a[i - 1]; 
        b[i] += b[i - 1]; 

        if(a[i] > b[i]){
          ok = false;
        }
    }
    if(ok ){
        cout<< "YES" << nl; 
    }
    else{
        cout << "NO" << nl;
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