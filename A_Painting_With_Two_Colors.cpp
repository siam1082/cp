#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;

  if((n-b)%2!=0){
    cout<<"NO"<<nl;

  }
  else if((a<=b) || (n-a)%2==0){
    cout<<"YES"<<nl;
  }
  else{
    cout<<"NO"<<nl;
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
