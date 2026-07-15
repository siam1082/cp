#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n,m;
    cin>>n>>m;
    string s,x;
    cin>>s;
    cin>>x;
    if(s.find(x)!=string::npos){
        cout<<0<<nl;
        return;
    }
    int cnt=0;

    while(s.size()<=25){
        s+=s;
        cnt++;
        if(s.find(x)!=string::npos){
        cout<<cnt<<nl;
        return;
     
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