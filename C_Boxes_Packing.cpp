#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &val:v){
        cin>>val;
    }
    sort(v.begin(),v.end());
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    int m=0;

      for(auto va:mp){
            m=max(m,va.second);
               }
        cout<<m<<'\n';
    

    return 0;
}