#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    
  
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if(n==2){
        cout<<"Yes"<<nl;
        return;
    }

    map<int, int> mp;
    
    
    for (int i = 0; i < n; i++) {
        mp[v[i]]++;
    }

    if (mp.size() == 1) {
        cout << "Yes" << nl;
    }
    else if (mp.size() > 2) {
        cout << "No" << nl;
    }
    else {
       

        if(abs(mp.begin()->second-mp.rbegin()->second)<=1){
            cout<<"Yes"<<nl;
        }
        else{
            cout<<"No"<<nl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
