#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int max_val = LLONG_MIN;
    int id = -1;


    for (int i = 0; i < n; i++) {
        if (v[i] >= max_val) { 
            max_val = v[i];
            id = i;
        }
    }

    if (v[id] <= m) {
        cout << n << nl;
        return;
    }

    cout << id+1 << nl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

   
        magic();
    
    return 0;
}