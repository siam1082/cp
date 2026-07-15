#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n;
    cin >> n;

    int m = LLONG_MAX;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x < 0) {
            x = -x;
        }  
        m = min(m, x);     
    }

    cout << m << nl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

        magic();
    
    return 0;
}
