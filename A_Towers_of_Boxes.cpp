#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n, m, d;
    cin >> n >> m >> d;

    int x = -1;

    for(int i = 1; i <= n; i++){
        if(i * m > d){
            x = i;
            break;
        }
      
    }
    if(x == -1){
        cout << 1 << nl;  
    } else {
        cout << (n + x -1) / x  << nl;
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