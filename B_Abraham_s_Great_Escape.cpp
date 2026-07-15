#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n*n==k+1){
            cout<<"NO"<<'\n';
            continue;
        }
        cout<<"YES"<<"\n";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(k){
                    cout<<"U";
                    k--;
                }
                else if(i!=n){
                    cout<<"D";
                }
                else if(j!=n){
                    cout<<"R";
                }
                else{
                    cout<<"L";
                }
                

            }
            cout<<'\n';
        }
    }
    return 0;
}