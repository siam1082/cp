#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    int  cnt=0;
    bool ok =false;

    for(int i=0;i<n;i++){
        
        if(v[i]<m){
           
            if(!ok){
                cnt++;
                ok =true;
            }

        }
        else if(v[i]>=m && v[i]<=k){
            continue;
        }
        else{
            ok =false;
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