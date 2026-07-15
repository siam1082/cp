#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll x=-a[n-1];
    ll y=b[n-1];
    for(int i=n-2;i>=0;i--){
        ll ev=max(x-a[i],y-b[i]);
        ll od=max(y+a[i],x+b[i]);
        x=ev;
        y=od;
    }
    cout<<max(x,y)<<nl;
 
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