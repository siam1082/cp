#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int>b(n);
    for(auto &val:b){
        cin>>val;
    }
    ll os=0;
    for(int i=0;i<n;i++){
        if(b[i]>0 ){
            os+=b[i];

        }
    }
    if(os%2!=0){
        cout<<os<<'\n';
        return 0;
    }
    int mi=131313;

    if(os%2==0){
    for(int i=0;i<n;i++)
    {
        if(b[i]%2!=0){
        mi=min(abs(b[i]),mi);
    }
    }
    os-=mi;
}
cout<<os<<'\n';

    return 0;
}