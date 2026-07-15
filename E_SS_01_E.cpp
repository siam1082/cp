#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n;
    cin >> n;

    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];

    int pre = 0, x = 0;
    int ans = LLONG_MIN;

    for(int i=1;i<=n;i++){
        pre += a[i];                 
        x = max(a[i], x + a[i]);    

        ans = max(ans, pre + x - a[i]);
        ans = max(ans, pre);
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