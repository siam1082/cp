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
  int mi = *min_element(v.begin(), v.end());

    int s=0;
    for(int i=0;i<n;i++){
        s+=(v[i]-mi);
    }
    cout<<s<<nl;
 
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