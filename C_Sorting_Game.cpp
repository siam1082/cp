#include <bits/stdc++.h>
using namespace std;
#define nl "\n"   // tut tut tut 
#define int long long
using pii = pair<int,int>;

void magic() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string sorted = s;
    sort(sorted.begin(), sorted.end());

    
    if (s == sorted) {
        cout << "Bob" << nl;
        return;
    }

    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (s[i] != sorted[i]) {
            ans.push_back(i + 1); 
        }
    }

    cout << "Alice" << nl;
    cout << ans.size() << nl;

    for (int x : ans) {
        cout << x << " ";
    }
    cout << nl;
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
