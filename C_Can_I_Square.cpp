#include<bits/stdc++.h>
using namespace std; 
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    ll s=0;
    vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            s+=v[i];
        }
        ll x=sqrt(s);
        if(x*x==s){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
}

    return 0;
}