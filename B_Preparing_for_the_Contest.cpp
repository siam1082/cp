#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n,k;
    cin>>n>>k;
    int x=0;
    // if(k==0){
    //     for(int i=n;i>0;i--)
    //     cout<<i<<" ";
    // return ;
    // }
    // else {
        for(int i=1;i<k+1;i++){
            cout<<i<<" ";
            
        }
        for(int i=n;i>=k+1;i--){
            cout<<i<<" ";
        }

    // }
    cout<<nl;

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