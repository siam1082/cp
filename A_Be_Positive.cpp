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
    int neg=0;
    int zer=0;
    int pos=0;
    for(int i=0;i<n;i++){
        if(v[i]==-1){
            neg++;

        }
        if(v[i]==0){
            zer++;
        }
        
    }
    pos=-(zer+neg);
    int ans=0;
    if(neg%2!=0){
        ans+=2;

    }
    ans+=zer;
    cout<<ans<<nl;

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