#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
 int a,b,c;
 cin>>a>>b>>c;
 vector<int>v;
 v.push_back(a);
 v.push_back(b);
 v.push_back(c);
 sort(v.begin(),v.end());
 cout<<v[1]<<nl;
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