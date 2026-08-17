#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
// void magic(){
//     int n ;
//     cin >> n ;
//     vector<int>v(n);
//     for(int i = 00 ; i<n; i ++){
//         cin >> v[i];
//     }
//     if(n & 1){
//         cout << "NO"<< nl;
//         return ;
//     }
//     vector<int>s = v;
//     sort(s.begin(), s.end());
//     int x = s[n/2 -1] + 1;
//     cout << x << nl;
   
  
// bool ok = true;

// for (int i = 0; i + 1 < n; i++) {
//     if (v[i + 1] > x && x > v[i]) {
//         ok = false;
//         break;
//     }
// }

// cout << (ok ? "YES" : "NO") << nl;
 


// }


void magic() {
    int n;
    cin >> n;
    vector<int> w(n + 1);
    int mo = LLONG_MAX, me = LLONG_MIN;;    
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
        if (i & 1)
            mo = min(mo, w[i]);
        else
            me = max(me, w[i]);
    }
    if (n & 1) {
        cout << "NO" <<nl;
        return;
    }
cout << (me + 1 < mo ? "YES" : "NO") << nl;
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