#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<int>v(r);
    for(int i=0;i<r;i++){
        cin>>v[i];
    }
    int k=2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i+1][j]==2)

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