#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    
    int c=0,b=0,back=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   
    for(int i=0;i<n;i+=3){
        c+=v[i];

    }
      for(int i=1;i<n;i+=3){
        b+=v[i];

    }
        for(int i=2;i<n;i+=3){
        back+=v[i];

    }
    if(c>b && c>back){
        cout<<"chest"<<nl;
    }
    else if(b>back&& b>c){
        cout<<"biceps"<<nl;
    }
    else{
        cout<<"back"<<nl;
    }
    return 0;
}