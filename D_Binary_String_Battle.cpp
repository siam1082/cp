#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    int n,m,cn=0;
    string s;
    cin>>n>>m;
    cin>>s;

    for(char c:s){
        if(c=='1'){
            cn++;
        }
    }
    if(cn<=m || n < 2*m){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;

    }


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