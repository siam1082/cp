#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
void magic(){
    int n ;
    cin >> n ;
    if(isPrime(n + 1)){
        cout << "YES" << nl;
    }
    else{
        cout << "NO" << nl;
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