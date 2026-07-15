#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n;
    cin >> n;
    string s,s1;
    cin>> s;
    cin >> s1;
    int cnt0 = 0 , cnt20 = 0;
    for(int i = 0 ; i < n ; i ++){
        if(s[i] == '0') cnt0++;
    }
    for(int i = 0 ; i < n ; i ++){
        if(s1[i] == '0') cnt20++;
    }
    if(cnt0 == cnt20){
        cout << "YES" << nl;

    }
    else {
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