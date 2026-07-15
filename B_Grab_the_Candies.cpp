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
    int s=0,m=0;
    for(int i=0;i<n;i++){
    if(v[i]%2==0)
    {
        s+=v[i];
    }
    else{
        m+=v[i];
    }
  

    }

      if(s>m){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
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