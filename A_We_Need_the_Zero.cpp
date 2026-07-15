// #include <bits/stdc++.h>
// using namespace std;
// #define nl "\n"
// #define int long long
// void magic(){
//     int n ;
//     cin >> n ;
//     vector <int > v(n );
//     for(int i =0 ;i < n ;i ++){
//         cin >> v[i];

//     }
//     int ans = v[0] ; 
//     for(int i = 1; i < n ;i ++){
//         ans  = ans ^ v[i];
//     }
//     cout << ans << nl;
 
// }
// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while(t--){
//         magic();
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n;
    cin >> n;

    vector<int> a(n);
    int xr = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        xr ^= a[i];
    }

    if(n % 2 == 1){
        cout << xr << nl;   
    }
    else{
        if(xr == 0) cout << 0 << nl;
        else cout << -1 << nl;
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