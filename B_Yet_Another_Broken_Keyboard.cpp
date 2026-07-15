#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define ll long long

void magic(){
    int n , m;
    cin >> n >> m;

    string s ;
    cin >> s;

    vector<bool> allo(26 , false);   

    for(int i = 0 ; i < m ; i++){    
        char c;                      
        cin >> c;
        allo[c - 'a'] = true;       
    }

    ll ans = 0 , curr = 0 ;
    for(auto ch : s){
        if(allo[ch - 'a']){
            curr++;
            ans += curr;

        }
        else {
            curr = 0;
        }
    }
    cout << ans << nl;


}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while(t--){
        magic();
    // }
    return 0;
}