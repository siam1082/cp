#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;

    for(int i=0;i<n;i++){
        if(s[i]!=s[n-1]) cnt++;

    }
    cout<<cnt<<nl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}