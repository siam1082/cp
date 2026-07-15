#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> v(n), u(n, 0), z;  
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n; i++){
        if(v[i] == -1){ 
            z.push_back(i);
        }
        else{
            u[i] = 1;
        }
    }

    if(z.size() == 1){
        int un = -1;
        for(int i = 0; i < n; i++){
            if(u[i] == 0){
                un = i;
                break;
            }
        }
        v[z[0]] = un;
    }

    int l = 0, r = n - 1;
    while (l < n && v[l] == l) l++;  
    while (r >= 0 && v[r] == r) r--; 

    int ma = 0; 
    ma = max(ma, r - l + 1);  
    cout << ma << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
