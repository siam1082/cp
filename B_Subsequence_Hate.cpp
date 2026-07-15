#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    string s;
    cin>>s;
    int cnt=0,cn=0;
    string s1=s;
    sort(s1.begin(),s1.end());
    bool ok=true;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s1[i]){
            ok=false;
            break; 
        }
    }
    
    bool ok1=true; 
    for(int i=0;i<s.size();i++){
        if(s[i]!=s1[s.size()-1-i]){
            ok1=false;  
            break;  
        }
    }
    
    if(ok || ok1){
        cout<<0<<nl;
        return;
    }
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            cnt++;
        }
    }
    
    for(int i=0;i<=cnt;i++){
        if(s[i]=='1'){
            cn++;
        }
    }
    
    cout<<cn<<nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0; 
}
