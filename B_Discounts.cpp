#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n),b(k);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<k;i++){
        cin>>b[i];

    }
    sort(v.begin(),v.end(),greater<int>());
    sort(b.begin(),b.end());
    vector<int>b2(k);
    b2[0]=b[0];
    for(int i=1;i<k;i++){
        b2[i]=b[i]+b2[i-1];
    }
    //  for(int i =0;i<k;i++){
    //    cout<<b2[i]<<" ";
    // }
    // cout << nl;
    
    for(int i=0;i<k;i++){
        // cout << b2[i] -1 << nl;
        // cout << v[b2[i]-1] << " ";
        if(b2[i]>v.size()) break;
        v[b2[i]-1] = 0;
    }
    // cout<< nl;
    int s=0;
    for(int i =0;i<n;i++){
        s+=v[i];
    }
    cout<<s<<nl;
//   for(int i =0;i<n;i++){
//        cout<<v[i]<<" ";
//     }

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;

    while(t--){
        solve();
    }

}