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
    int s=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];
    }
   bool ok1=false,ok2=false;

    for(int i=0;i<n;i++){
        if(v[i]==1){
            ok1=true;

        }
        else{
            ok2=true;
        }
    }
    if(s%2==0 && ok1 && ok2 && n%2==1){
        cout<<"YES"<<nl;
    }
    else if(s%2==0 && n%2==0){
        cout<<"YES"<<nl;
    }
    else{
        cout <<"NO"<<nl;
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