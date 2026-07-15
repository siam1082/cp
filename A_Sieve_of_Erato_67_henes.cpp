#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>> v[i];
    }
    bool ok1 =0 , ok2 =0 , ok3 =0 ,ok4=0 ;
    for(int i=0; i < n;i++){
        if(v[i]==1  ){
         ok1=1;
    
        }if(v[i]==-1  ){
         ok2=1;
    
        }if(v[i]==67  ){
         ok3=1;
    
        }if(v[i]==-67 ){
         ok4=1;
    
        }
    }
    if(ok3 || ok1 && ok3 || ok2 && ok4){
        cout<<"YES"<<nl;
        return;
    }
    cout<<"NO"<<nl;
 
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