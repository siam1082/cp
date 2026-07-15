#include<bits/stdc++.h>
using namespace std; 
int main(){
    long long l1,r1,l2,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;
    long long  ma=-1;
    long long mi=INT_MAX;
    ma=max(l1,l2);
    mi=min(r1,r2);
    if(ma>mi){
        cout<<0<<'\n';
        return 0;
    }
    if(ma<=k && k<=mi){
        cout<<mi-ma<<'\n';
    }
    else{
        cout<<mi-ma+1<<"\n";
    }


    return 0;
}