#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n;
    cin >> n;

    vector<int> v(n);
    int tt = 0;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 2) tt++;
    }

    if(tt % 2 != 0){
        cout << -1 << nl;
        return;
    }

    int two = 0, ans = -1;

    for(int i = 0; i < n; i++){
        if(v[i] == 2) two++;
        if(two == tt - two){
            ans = i + 1;
            break;
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