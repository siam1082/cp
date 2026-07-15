#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    vector<int>b;
    int s=0;
    int f=v[0],l=v[n-1];
    if(f==-1 && l==-1) v[0]=v[n-1]=0;
    if(f==-1) v[0]=v[n-1];
    if(l==-1) v[n-1]=v[0];
    
     for(int i=0;i<n-1;i++){
        if(v[i]==-1) v[i]=0;
        
    
    
    

    }
 
    // for(int i=0;i<n;i++){
    //     if(v[i]==-1 && cnt==1){
    //         b.push_back(abs(s)-1);
    //     }
    //     else if(v[i]==-1 && cnt>1){
    //         b.push_back(0);
    //     }
    //     b.push_back(v[i]);

    // }
    
    cout<<abs(v[0]-v[n-1])<<nl;

    
    // cout<<b[0]<<nl;
    // int m=0;
    // for(int i=0;i<n-1;i++){
    //     m+=b[i+1]-b[i];

    // }
    // cout<<abs(m)<<nl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<nl;
}


int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}