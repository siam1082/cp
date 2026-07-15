#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=n;i>m;i--){
        cout<<i<< " ";
    }
    for(int i=1;i<=m;i++){
        cout<<i<<" ";
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