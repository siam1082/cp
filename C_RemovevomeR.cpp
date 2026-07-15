#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin >> n;   
    string s;
    cin >>s;
    int c = 0;
    for(int i = 0 ; i < n - 1; i++){
        if(s[i] != s[i+1]){
            c++;
        }
    }
    if(c==1) cout << 2 << nl;
    else cout << 1 << nl;

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