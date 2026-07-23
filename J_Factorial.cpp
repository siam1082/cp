#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
int magic(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * magic(n - 1);
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

int n ;
cin >> n;
      cout <<   magic(n) << nl;
    
    return 0;
}