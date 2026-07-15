#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
 int n ;
 cin >> n ;
 if(n%4 ==1) cout<< "ALICE" << nl;
 else cout<<"BOB"<<nl;
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