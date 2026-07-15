#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin >> n ;
    int m = 3 * n , l = 1, r = m;;
    vector<int> v;
    for(int i   = 0 ; i <  n ; i++){
        v.push_back(l);
        v.push_back(r - 1);
        v.push_back(r);
        l++;
        r-=2;


    }
    for(int   i = 0 ; i <m ; i++ ){
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