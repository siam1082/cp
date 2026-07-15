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
    int l=v[0],cnt=0;
    for(int i=1;i<n;i++){
        if(l+1<v[i]){
            cnt++;
            l=v[i];

        }
       
    }
    cout<<cnt+1<<nl;

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