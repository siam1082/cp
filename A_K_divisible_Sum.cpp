#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n,m;
    cin>>n>>m;
    if(n>m){
    if(n%m==0){
        cout<<1<<nl;
        return ;
    }
    else{
        cout<<2<<nl;
        return;
    }
}   
else{
    if(m%n==0){
        cout<<m/n<<nl;
        return ;
    }
    else{
        cout<<m/n+1<<nl;
        return;
    }

}
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