#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n,m;
    cin>>n>>m;
    cout<<"YES"<<nl;
    for(int i=n;i<m;i+=2){
        cout<<i<<" "<<i+1<<nl;
    }
}



int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while(t--){
        magic();
    }
    return 0;
}