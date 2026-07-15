#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // set<int>s(v.begin(),v.end());
    // if(s.size()==1){
    //     cout<<1337<<nl;
    //     return;
    // }
    //sort(v.begin(),v.end());
    int c=0;
    for(int i=0;i<n;i++){
        if(v[i]<m){
            c++;
        }
        // else{
        //     break;
        // }

    }
    // int x=abs(v[c]-v[c+1])/2;
    if(c>=(n+1)/2){


        // int x=abs(v[c]-v[c+1])/2;
    cout<<m-1<<nl;
    }
    else{
        cout<<m+1<<nl;
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}