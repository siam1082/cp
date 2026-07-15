#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){

    int n;
    cin>>n;
    vector<int>v(n);
    // if(n==2){
    //     cout<<2<<nl;
    //     return;
    // }
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }

    if(mp.size()==1){
        cout<<n<<nl;
        return;
    }
    int ma = 0;
    int m_freq = 0;
    for (auto & y : mp) {
        m_freq = max(m_freq, y.second);
    }
    for (int i= 1; i <= m_freq; i++) {
        int cnt = 0;
        for (auto &y : mp) {
            if (y.second >= i) cnt++;
        }
        ma = max(ma, cnt * i);
    }
    cout << ma << nl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;

    while(t--){
        solve();
    }

}