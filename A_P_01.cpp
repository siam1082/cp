#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int l,r;
    cin>>l>>r;
    int cnt=0;
    if(l<0){
        l=1;
    }
    for(int i=l;i<=r;i++){
        if(i%2==0){
            cnt++;
        }
    }
 
    cout<<cnt<<nl;
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