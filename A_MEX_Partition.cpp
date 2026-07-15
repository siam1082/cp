#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
  set<int>s;
  for(int i=0;i<n;i++){
    s.insert(v[i]);
  }
  int m=0;
  while(s.find(m)!=s.end()){
    m++;
  }
  cout<<m<<nl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;

    while(t--){
        solve();
    }

}