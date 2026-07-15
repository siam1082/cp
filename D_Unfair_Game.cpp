#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n,m,ans=0;
    cin>>n>>m;

 for (int a = 1; a <= n; a++) {
        int x = a;
        int maxBit = (int)log2(x);
        int cntBit = __builtin_popcount(x);

       if(maxBit + cntBit > m){
        ans++;



       }
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