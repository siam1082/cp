#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic() {
    int n;
    cin >> n;
    //eassy code contest e ba* kori 
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    set<long long> st;
    bool found = false;

    for (auto x : a) {
        if (st.count(x)) {
            cout << 2 << nl;
            cout << x << " " << x << nl;
            found = true;
            break;
        }
        st.insert(x);
    }

    if (!found) {
        cout << -1 << nl;
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