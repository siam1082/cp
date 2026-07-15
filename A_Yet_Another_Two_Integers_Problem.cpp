#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    int a, b;
    cin >> a >> b;
    int dif = (abs(a - b) + 9) / 10; 
    cout << dif << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}