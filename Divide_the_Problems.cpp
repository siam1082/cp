#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin >> n ;
    vector<int > v(n);
    for(int i = 0 ; i < n ; i ++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[n/2] - v[n/2 -1] << nl;
 
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

  
        magic();
  
    return 0;
}