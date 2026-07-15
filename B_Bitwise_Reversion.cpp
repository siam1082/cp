#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        bool ok = false;
        if( ((x & y) & (~z)) || ((y & z) & (~x)) || ((z & x) & (~y)) ) ok = true;
        if(ok) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}
