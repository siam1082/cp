#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic() {
    int n;
    cin >> n;
    vector<int> v(2*n);
    for(int i = 0; i < 2*n; i++) cin >> v[i];

    map<int,int> mp;
    for(int i = 0; i < 2*n; i++) mp[v[i]]++;

    vector<pair<int,int>> freq_vec(mp.begin(), mp.end());
    sort(freq_vec.begin(), freq_vec.end(), [](pair<int,int> &a, pair<int,int> &b){
        return a.second < b.second; // ascending frequency
    });

    int slots = n;
    int cnt = 0;

    for(auto &p : freq_vec) {
        while(p.second > 0 && slots > 0) {
            cnt++;        // place one element
            p.second--;   // reduce frequency
            slots--;      // reduce empty slot
        }

        // count remaining odd frequencies in this element
        if(p.second % 2 == 1) {
            cnt += 1;  // add to count
          /// optional, reduce to make even
        }

        if(slots == 0) break;
    }

    cout << cnt << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) magic();
}
