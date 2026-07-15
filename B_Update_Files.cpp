#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n,m;
    cin>>n>>m;
    int h=0;
    n=n-1;
    int i=2,j=1;
  while(n>0){
    h++;
    n=n-j*i;
    j++
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