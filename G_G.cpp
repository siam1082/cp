#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int s=0;
        for(int i=0;i<7;i++){
             int x;
             cin>>x;
            s+=x;
        }
        cout<<s<<'\n';
    }
    return 0;
}