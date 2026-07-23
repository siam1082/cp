#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(int n ){
    if(n == 0) return; 
    magic(n / 2);

    cout << n % 2;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n ;
 
        if(n == 0) {
            cout << 0 << nl;
        } else {
            magic(n);
            cout << nl;
        }
    }
    return 0;
}