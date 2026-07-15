#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
void magic(){
    int n;
    cin>>n;
    vector<int>v(n);
    map<int ,int>mp;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    int cnt=0;

    for(auto x:mp){
        if(x.first!=x.second){
        if(x.first<x.second){
            cnt+=x.second-x.first;
        }
        
        
        if(x.first>x.second){
            cnt+=x.second;
      
        }
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