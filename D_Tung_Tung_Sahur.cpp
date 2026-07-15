#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    string s,s1;
    cin>>s;
    cin>>s1;
    bool ok =true;
    bool ok2=true;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s1.size();j++){
            if(s[i]!=s1[j])
            {
                ok =false;
            }
            if(s[i]!=s[j+1]){
                ok2=false;
                j++;
            }
        }
    }
    if(ok || ok2){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;

    while(t--){
        solve();
    }

}