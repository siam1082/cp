#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    for(auto &v:mp){
        if(v.second>=3){
            cout<<v.first<<nl;
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