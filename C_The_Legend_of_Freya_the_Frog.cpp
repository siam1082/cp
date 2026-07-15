#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    
    int n1 = (n + k - 1) / k;  
    int m1 = (m + k - 1) / k;  
    // cout<<n1<<" ";
    
    
    if(n1 > m1){
        cout << 2*n1-1 << nl;
    }
    else{
        cout << 2*m1  << nl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
