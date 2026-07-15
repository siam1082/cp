#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>b;
    if(__builtin_clz(n)>__builtin_clz(m)){   
        cout<<-1<<nl;
        return;                              
    }
    if(n==m){
        cout<<0<<nl;
        return;                          
    }
    int x=0;
    for(int i=0;i<31;i++){
        x=(1<<i);
        if(x<=n && (n&x)==0){
            n+=x;
            b.push_back(x);
        }
    }
    for(int i=0;i<31;i++){
        x=(1<<i);
        if(x<=n && (m &x)==0){
           
            b.push_back(x);
        }
    }
    cout<<b.size()<<nl;
    for(auto &x:b){
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
