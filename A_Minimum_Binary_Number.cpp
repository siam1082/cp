#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end(),greater<int>());
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') cnt1++;

    }
    if(cnt1>0){
        cout<<1;
    }
    for(int i=cnt1;i<n;i++){
        cout<<s[i];
    }
    cout<<nl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
        solve();
    
    return 0;
}