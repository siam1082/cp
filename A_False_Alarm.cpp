#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int first,last;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            first=i;
            break;
        }
        
    }
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] == 1) {
            last = i;
            break;
        }
    }
    int m=last-first+1;
    if(m>x){
        cout<<"NO"<<nl;
    }
    else
    {
        cout<<"YES"<<nl;
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