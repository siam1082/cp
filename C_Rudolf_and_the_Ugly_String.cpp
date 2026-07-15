#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long

void magic(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string sub1 = "map";
    string sub2 = "pie";
    
    int cnt = 0;

    
    for(int i = 0; i + 2 < n; ){
        if(s.substr(i, 3) == sub1 || s.substr(i, 3) == sub2){
            cnt++;
            i += 3 ;  
        } else {
            i++;
        }
    }
    
    // for(int i = 0; i + sub1.size() <= s.size(); i++){
    //     if(s.substr(i, sub1.size()) == sub1){
    //         cnt++;
    //     }
    // }
    
    // for(int i = 0; i + sub2.size() <= s.size(); i++){
    //     if(s.substr(i, sub2.size()) == sub2){
    //         cnt++;
    //     }
    // }
    
    cout << cnt << nl;
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
