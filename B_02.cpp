#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n;
    cin >> n;
    if(n < 4){
        cout << 0 << nl;
        return;
    }
    else{
        int x = (n - 2) / 2;
        cout << (x * (x + 1)) / 2 << nl; 
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
