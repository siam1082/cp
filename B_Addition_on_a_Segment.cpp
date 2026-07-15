#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n;
    cin>>n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // set<int>s(v.begin(),v.end());
    // if(s.size()==1){
    //     cout<<1<<nl;
    //     return;
    // }
    int cnt=0,s=0;
    for(int i=0;i<n;i++){
        s+=v[i];
        if(v[i]==0) cnt++;
    } 
   int ans=min((n-cnt),(s-n+1));
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