#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;

void magic() {
    int n;
    cin >> n;

    if(n == 0) exit(0); 

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
        if(i) cout << " ";
        cout << v[i];
    }
    cout << nl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
   
    while(true){
        magic();
    }
    return 0;
}