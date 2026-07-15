#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            ans++;
            i+=k-1;
        }

    }
    cout<<ans<<nl;
 
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        magic();
    }
    return 0;
}