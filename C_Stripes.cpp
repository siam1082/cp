#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    // int i=8,j=8;

    char a[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>a[i][j];
        }

    }

    int r=0,b=0;
      for(int i=0;i<8;i++){
        r=0;
        for(int j=0;j<8;j++){
            if(a[i][j]=='R'){
                r++;
            if(r==8){
            cout<<'R'<<nl;
            return ;
           }
        //     }
        //     else if(a[i][j]=='B'){
        //         b++;
            }
        }

    }
    // cout<<b<<nl;
    // cout<<r<<nl;
    // if(r==8){
    //     cout<<'R'<<nl;

    // }
    // else{
        cout<<'B'<<nl;
    
    


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;

    while(t--){
        solve();
    }

}