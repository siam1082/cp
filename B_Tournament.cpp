#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    int n,j,k,mx=0;
    cin>>n>>j>>k;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    if(k>1 || mx==a[j]){
        cout<<"YES"<<endl;

    }
    else{
         cout<<"NO"<<endl;

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