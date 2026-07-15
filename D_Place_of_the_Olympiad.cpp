#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
     int n, m, k;
    cin >> n >> m >> k;
   
    k = (k + n - 1) / n;
    k = m / (m - k + 1);
    
    cout << k << "\n";

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