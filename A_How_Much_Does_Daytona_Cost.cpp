#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        bool ok =false;
        for(auto &val: v){
            cin>>val;
            if(val==k){
                ok=true;
            }
        }
        if(ok){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
        
    }
    return 0;
}