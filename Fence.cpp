#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cur = 0;
    for (int i = 0; i < k; i++) {
        cur += v[i];
    }
    int sum = cur, ans = 1 , count = 1;
    for (int i = k; i < n; i++) {
        cur += v[i] - v[i - k];
        count++;          
        if (cur < sum) {
            sum = cur;
         ans  = count;  
        }
    }
    cout <<  ans  << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    magic();

    return 0;
}