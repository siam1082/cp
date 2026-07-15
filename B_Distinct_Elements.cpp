#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>b;
   b. push_back(1);
   int c=2;
    for(int i=1;i<n;i++){
        // s+=v[i];
        int d=v[i]-v[i-1];
        if(d>i){
            b.push_back(c);
            c++;
           
        }
        else{
            b.push_back(b[i-d]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<nl;
 
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;
 
    while(t--){
        solve();
    }
 
}