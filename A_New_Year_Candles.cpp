#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int ans=0,r=0;
    
    while(n){
        n--;
        ans++;
        r++;
        if(r==k){
            r=0;
            n++;
        }
        
       
    }

    cout<<ans<<'\n';
    return 0;
}