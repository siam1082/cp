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
    int r=0;
    set<int> c,s;
    for(int i=0;i<n;i++){
        c.insert(a[i]);
        s.insert(a[i]);
        if(c.size()==s.size()){
            r++;
            s.clear();
            
        }
    }
    cout<<r<<nl;

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