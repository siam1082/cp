#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    
    int n = 7;
    vector<int> v(n);
    for(int i = 0 ; i< n ; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
     int sum = v[n - 1];
    
    for(int i = 0; i<n - 1; i++){
        sum -=v[i];
    }
   
    cout << sum << nl;

 
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