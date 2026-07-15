#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n;
    cin>>n;
    bool ok1=false,ok2=false,ok3=false,ok4=false;

    vector<int>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i];
     }
     for(int i=0;i<n;i++){
        if(i%2==0){
            if(v[i]%2==1) ok1=true;
            else ok2=true;
        }
        if(i%2==1){
            if(v[i]%2==0) ok3=true;
            else ok4=true;
        
        
        }
        
        
     }
     if(ok1 && ok2 || ok3 && ok4){
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