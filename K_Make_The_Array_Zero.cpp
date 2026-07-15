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
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    int ans=m.size();
    cout<<ans<<nl;
 
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

  
        magic();
    
    return 0;
}