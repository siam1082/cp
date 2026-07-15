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
   int r=n,l=1;
    for(int i=0;i<n;i++){
        // v.push_back(i);
        // cout<<i<<" ";
        if(i%2==0){
            cout<<r<<" ";
            r--;
        }
        else{
            cout<<l<<" ";
            l++;
        }
        
    }
    // for(auto x:&v){
    //     cout<<x<<" ";
    // }
   
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