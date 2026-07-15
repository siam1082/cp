#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n;
    cin>>n;
   string s="2025";
   string f="";
   cin>>f;
  

  // fkk

    if (f.find("2025") != string::npos &&
        f.find("2026") == string::npos) {
        cout << 1 << nl;
    } else {
        cout << 0 << nl;
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