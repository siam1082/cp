#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(2 * k > n) {
        cout << -1 << nl;
        return;
    }
    // int mi = INT_MAX;
    // int r = n - k;
    // for (int i = k; i <= r; i++){
        int lc = 0; 
        int rc = 0; 
    //     for(int j = 0; j < i; j++){
    //         if(s[j] == 'L') lc++; 
    //     }
    //     for(int j = i; j < n; j++){
    //         if(s[j] == 'R') rc++; 
    //     }

    //     mi = min(mi, (lc + rc));
    // }
    for(int i  = 0 ; i < k ; i ++){
        if(s[i] == 'L') rc++;
    }
    for(int i = n - 1; i >= n - k; i--){
        if(s[i] == 'R') lc++;
    }
    cout << lc + rc << nl;
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