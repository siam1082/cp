#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n;
    cin>>n;
   if(n==2){
    cout<<2<<nl;

   }
   else if(n==3){
    cout<<3<<nl;
   }
   else if(n%2==0){
    cout<<0<<nl;
   }
   else{
    cout<<1<<nl;
   }
 
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