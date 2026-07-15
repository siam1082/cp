#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool ok=false;
   
    if(is_sorted(v.begin(),v.end())){
        ok=true;
    }
    if(ok || k>1){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
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