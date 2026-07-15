#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n , a , b;
    cin >> n >> a >> b;
    int x = n - a - b;
    if(x > 1 || a == n && b == n){
        cout << "YES"<< nl;

    }
    else
    cout << "NO"<< nl;
 
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