#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;

void magic(){
    int w, h, n;
    cin >> w >> h >> n;

    int cnt = 1;

    while(w >= 1 && h >= 1){
        if(w % 2 == 1 && h % 2 == 1){
            break;
        }
        if(w % 2 == 0){
            cnt *= 2;
            w /= 2;
        }
        if(h % 2 == 0){
            cnt *= 2;
            h /= 2;
        }
    }

    if(cnt >= n){
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
