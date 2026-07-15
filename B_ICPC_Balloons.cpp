#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<char>v(n);
    set<char>s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    int m=2*s.size();
    if(v.size()==s.size()){
        cout<<m<<nl;
    }
    else {
       int n= v.size()-s.size();
       m+=n;
       cout<<m<<nl;

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