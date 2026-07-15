#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n , m , s , t;
    cin >> n >> m >> s >> t;
    
    cout <<  (n / m) - ((t / m) - (s- 1 )/m) << nl;
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