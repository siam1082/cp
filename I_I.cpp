#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &val:v){

            cin>>val;
        }
        bool ok=true;
        for(int j=1;j<n;j++){
            if(v[j]<=v[j-1]){
                ok=false;
                break;

            }
        }
        if(ok){
            cout<<"Yes"<<'\n';
        }
        else{
            cout<<"No"<<'\n';
        }

    }
    return 0;
}