#include<bits/stdc++.h>
using namespace std ;
#define nl '\n'
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;
    v.push_back(a);
      v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        int x=v[2]-v[0];
        if(x>=10){
            cout<<"check again"<<nl;
        }
        else{
            cout<<"final"<<" " <<v[1]<<nl;

        }

    return 0;
}