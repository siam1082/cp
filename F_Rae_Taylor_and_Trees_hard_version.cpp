#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
     int root;
    vector<pii>edge;
    vector<int>stk;
    for(int i=0;i<n;i++){
        cin>>v[i];
         root=v[i];
        while(stk.size() && stk.back()<v[i]){
             edge.push_back({v[i], stk.back()});
            root=min(root,stk.back());
           
            stk.pop_back();

            // constructing tree by the use of stack stk,and using min as a root ,,
            // from KK" 
           // cout<<stk.back()<<nl;
        }
        stk.push_back(root);
    }
    // int root;
    // vector<pii>edge;
    // vector<int>stk;
    // for(int i=0;i<n;i++){
    //     root=v[i];
    //     while(stk.size() && stk.back()<v[i]){
    //          edge.push_back({v[i], stk.back()});
    //         root=min(v[i],stk.back());
           
    //         stk.pop_back();
    //     }
    //     stk.push_back(root);
    // }
    if(stk.size()==1){ 
        cout<<"YES"<<nl;
        // for(auto [x, y]: edge){ 
        //     cout<< x<<" "<<y<<nl;
        // }
         for(int i = 0; i < edge.size(); i++){
         cout << edge[i].first << " " << edge[i].second << nl;
       }

    }

    else{
        cout<<"NO"<<nl;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
