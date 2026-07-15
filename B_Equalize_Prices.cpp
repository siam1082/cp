#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n; i++){
        cin>>v[i];
    }
 int ma=*max_element(v.begin(),v.end())-k;
 int mi=*min_element(v.begin(),v.end())+k;
    if(ma>mi){
        cout<<-1<<nl;
    }
    else cout<<mi<<nl;
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
