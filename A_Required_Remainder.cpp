#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
       long long a=k-k%x+y;
       if(a<=k){
        cout<<a<<endl;
       }
       else{
        cout<<k-k%x-(x-y)<<endl;
       }

    }
    return 0;
}