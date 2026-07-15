#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
 
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    int yellow=x/2;
    int ans=yellow+y;
    if(ans>n){
        cout<<n<<nl;
        return;
    }
    cout<<ans<<nl;
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