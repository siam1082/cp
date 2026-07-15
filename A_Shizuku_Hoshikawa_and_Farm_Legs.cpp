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
    int c=n/4;
    // if(n<4){
    //     cout<<
    // }
    if(n==2) cout<<1<<nl;
    else if(n%4==0 || n%4==2){
        cout<<c+1<<nl;
        
    
    }
    else if(n%2!=0 && n%4!=0){
        cout<<0<<nl;
      
    }
    // if(n%4==2){
    //     cout<<c+1<<nl;
        
    // }
    // else{
    //     cout<<
    // }
    // }
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