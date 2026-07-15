#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    string s;
    cin>>s;
    set<char>ch;
    for(int i=0;i<s.size()/2;i++){
        ch.insert(s[i]);
    }
    if(ch.size()>=2){
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