#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
      int x=0,y=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            x++;
        }
        else if(b>a){
            y++;
        }

      
    
    }
    if(x<y){
        cout<<"Chris"<<'\n';
    }
    else if(x>y){
        cout<<"Mishka"<<'\n';
    }
    else{
        cout<<"Friendship is magic!^^"<<'\n';
    }
    return 0;
}