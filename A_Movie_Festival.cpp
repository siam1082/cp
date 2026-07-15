#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;

void magic(){
    int n;
    cin>>n;
    vector<pii>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;

    }

    int last=0;
    int cnt=0;

    sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
        return a.second < b.second;
    });

    for(auto &m:v){
        if(m.first >= last){
            cnt++;
            last = m.second;   
        }
    }
    cout<<cnt<<nl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    magic();
    return 0;
}
