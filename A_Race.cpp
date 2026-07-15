#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int a,x,y;
    cin>>a>>x>>y;
    // if(x>y){
    //     swap(x,y);
    // }
   if(a<=y && a>=x){
    cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;

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