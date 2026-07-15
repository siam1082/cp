#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;

void magic(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    set<int> s(v.begin(), v.end());
    int x = s.size();

    for(int i = 0; i < n; i++){  
        if(v[i] >= x){
            cout << v[i] << nl;
            return;
        }
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
