#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n,s,x;
    cin>>n>>s>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int su=0;
    // cout<<su<<nl;
    for(int i=0;i<n;i++){
        su+=v[i];
    }
    
    if(s-su==0){
        cout<<"YES"<<nl;

    }
  
    else if((s-su)<0){
        cout<<"NO"<<nl;
    }
    else if((s-su)%x!=0){
        cout<<"NO"<<nl;
    }
    else{
        cout<<"YES"<<nl;
    }
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