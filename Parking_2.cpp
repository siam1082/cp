#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int x , y , l , r , a,b,ans=0;
    cin >> x>>y >>l>> r>>a>>b;
    for(int i = a ; i< b; i++){
        if( l <= i && r>i){
            ans += x;

        }
        else {
            ans+=y;
        }
    }
    cout <<ans<< nl;
 
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
        magic();
    
    return 0;
}