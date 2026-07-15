#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    int n;
    cin >> n;
    string v;
    vector<int> b;
    cin >> v;
    
    for(int i = 0; i < n; i++){
        if(v[i] == '1'){
            b.push_back(i + 1);
        }
    }
    
    cout << b.size() << nl;
    
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }
    cout << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
    return 0;
}
