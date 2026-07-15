#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n , m ;
    cin >> n >> m;
   
    if(n % 2 == m % 2){
        cout << m << " " << n ;
        cout << nl;
        return ;
    }
    
// if(n % 2 != 0 && m % 2 == 0){
//     cout << n + 1 << " " << m << nl;
//     return ;
// }
// if(m % 2 != 0 && n % 2 == 0){
//     cout << n  << " " << m - 1 << nl;
//     return ;
// }
// if(m % 2 != 0 && n % 2 != 0){
//     cout << n  << " " << m - 1 << nl;
//     return ;
// }
//    if( n % 2 != m %2 ){
//     if(__gcd(n + 1 , m)>= n){
//         cout << n + 1 << " " << m << nl;
//     }
//     else if (__gcd(n , m - 1)>= n){
//         cout << n << " " << m - 1 << nl;
//     }
//     else{
//         cout << n + 1 << " " << m - 1 << nl;

//     }
//    }

while(m % n != 0 && n <= m){
    m--;
    if(m % n == 0){
        cout << n << " " << m << nl;
        return ;
    }
    n++;
    if(m % n == 0){
        cout << n << " " << m << nl;
        return ;
    }

}
// cout << n << " " << m << nl;

 
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