#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    vector<int> c(m);
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        auto ub = upper_bound(v.begin(), v.end(), c[i])-v.begin();
        cout<<ub<<" ";
    }
 
    return ;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

        magic();
    
    return 0;
}