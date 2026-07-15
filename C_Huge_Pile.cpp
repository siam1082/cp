#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n,m;
    cin>>n>>m;
    if(n==m){
        cout<<0<<nl;
        return;

    }
    int x=n,y=n,ans=0;
    while(x>0 && y>0){
        x=x/2;
        y=(y+1)/2;
        ans++;
        if(m<=y && m>=x){
            cout<<ans<<nl;
            return ;
        }
    }
    cout<<-1<<nl;
 
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