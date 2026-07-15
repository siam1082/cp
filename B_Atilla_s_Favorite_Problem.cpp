#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ma=0;
        for(int i=0;i<n;i++){
            ma=max(ma,s[i]-'a');
        }
        cout<<ma+1<<'\n';
    }
    return 0;
 }