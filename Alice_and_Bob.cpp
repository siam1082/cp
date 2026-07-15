#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        
    }
    int kom=0,beshi=0;
    for(int i=0;i<n;i++){
        if(v[i]>k) beshi++;
        if(v[i]<k) kom++;
    }
    if(kom>beshi){
        cout<<k-1<<nl;
    
    }
    else{
        cout<<k+1<<nl;
    
    }
    // else{
    //     cout<<k<<nl;
    // }
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




