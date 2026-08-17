#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin >> n ;
    vector<int> v(n);
    map<int, int> freq;
    int m = 0;
    int val = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];

        freq[v[i]]++;

        if (freq[v[i]] > m) {
            m = freq[v[i]];
        
        }
    }
    if((n/2) >= m ){
        cout << n << nl;
        return ;

    }
    else{
        int x = n - m;
        cout << x + x << nl;
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