#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin >> n ;
     vector<int> v(n);
     for(int i = 0 ; i < n ; i++){
        cin >> v[i];
     }
     sort(v.begin(),v.end(),greater<int>());
     int x = 0 , y =0 ;
     for(int i = 0 ; i < n ; i++){
        if(i % 2 == 0)  x += v[i];
        else y += v[i];
     }
 
     cout << x - y << nl;

}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

   
        magic();

    return 0;
}