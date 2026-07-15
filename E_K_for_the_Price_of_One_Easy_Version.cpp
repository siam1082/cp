#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic() {
    int n, p, k;
    cin >> n >> p >> k;  
// bf te possible na , ans will be in prefix sum approch 

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<int> pref(n+1, 0);
    for(int i = 0; i < n; i++){
        pref[i+1] = pref[i] + v[i];
    }

    int ans = 0;  
    for(int j = 0; j < k; j++){

        int c = p;  
        int cnt = 0;   
        if(pref[j] <= c){
            c -= pref[j];
            cnt += j;
        }
        else continue;
        for(int i = j + k - 1; i < n; i += k){

            if(c >= v[i]){
                c -= v[i];
                cnt += k;
            }
            else break;
        }

        ans = max(ans, cnt);
    }

    cout << ans << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        magic();
    }

    return 0;
}