#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0,m=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt++;
            m=max(cnt,m);
        }
        else{
            cnt=0;
        }
    }
    cout<<m<<nl;
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