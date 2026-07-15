#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
// #define int long long
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
    int c0=0,c1=0;
    for(int i=0;i<n;i++){
        if(v[i]==1) c1++;
        if(v[i]==0) c0++;
    }
    cout<<c1*(1LL<<c0)<<nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}