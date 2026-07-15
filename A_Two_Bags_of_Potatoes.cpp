#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,k,n;
    cin>>y>>k>>n;
    if(y>=n) {
        cout<<-1<<'\n'; 
        return 0;
    }
    int l=y/k;
    int j=(l+1)*k;
   if(j>n){
    cout<<-1<<'\n';
    return 0;
   }
   
    for( int i=j-y;i<=n-y;i+=k){
        cout<<i<<" ";
    }
    cout<<'\n';

    return 0;
}