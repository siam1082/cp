// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// const int INF = 1e18;

// bool ok(int a, int b) {
//     if (a == b) return false;
//     if (a + b == 7) return false;
//     return true;
// }

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n+1);
//     for(int i=1;i<=n;i++) cin >> a[i];

//     vector<int> prev(7, INF), cur(7, INF);
//     for(int x=1;x<=6;x++) {
//         prev[x] = (a[1] == x ? 0 : 1);
//     }

//     for(int i=2;i<=n;i++) {
//         for(int x=1;x<=6;x++) cur[x] = INF;

//         for(int x=1;x<=6;x++) {
//             int cost = (a[i] == x ? 0 : 1);

//             for(int y=1;y<=6;y++) {
//                 if(ok(y, x)) {
//                     cur[x] = min(cur[x], prev[y] + cost);
//                 }
//             }
//         }

//         prev = cur;
//     }

//     int ans = INF;
//     for(int x=1;x<=6;x++) ans = min(ans, prev[x]);

//     cout << ans << "\n";
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--) solve();

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n;
    cin >> n ;
    vector<int> v(n);
    int cnt = 0;
    for(int i =0 ; i < n; i++){
        cin >> v[i];

    }
    for(int i=0 ;i< n ;i++){
        if(v[i]== v[i+1]) cnt++;
        if(v[i]+v[i+1]==7 ) 
        {
        cnt ++;
        i++;
        }
    }
 cout << cnt << nl;
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