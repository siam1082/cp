#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
int magic(vector<int>& v,int i ,  int j) {
    if (i  == j) {
        return v[i];
    }
    return v[i] + magic(v, i - 1 ,j);
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , i ;
    cin >> n>> i;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << magic(v, n- 1, n - i ) << nl;
    return 0;
}