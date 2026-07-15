#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

int digitSum(int n){
    int tot = 0;
    while(n){
        tot += n % 10;
        n /= 10;
    }
    return tot;
}

void magic(){
    int x;
    cin >> x;

    int ans = 0;

    for(int s = 1; s <= 100; s++){
        int y = x + s;
        if(digitSum(y) == s){
            ans++;
        }
    }

    cout << ans << nl;
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