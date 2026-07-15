#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        int ans=60-m +( (23-h)*60);
    
        cout<<ans<<'\n';

    }
    return 0;
}