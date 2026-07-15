#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
        c++;
            
        }
        else{
            c--;
        }
    }
        if(abs(c)!=n){
             sort(v.begin(),v.end());
        }
     
    for(auto &x:v){
        cout<<x<<" ";
     }
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