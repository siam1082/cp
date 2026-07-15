// #include <bits/stdc++.h>
// using namespace std;
// #define nl "\n"
// #define ll long long
// void solve(){
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++){
//         cin >> v[i];
//     }
//     int k = n;
//     int x = 0;
//     for(int i = 0; i < n - 1; i++){
//         x += max(v[i], v[i + 1]);
//     }
//     x+=max(v[0],v[n-1]);
//     int m = *max_element(v.begin(), v.end());
//     cout << x - m << nl;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"

void solve(){
    int n;
    cin >> n;
    vector<pii> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

 \
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}