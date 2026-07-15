#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &val : v){
            cin >> val;
        }

        int m = v[0];
        bool ok = true;

        for(int i = 1; i < n; i++){
            m = min(m, v[i-1]);
            if(v[i] - m >= m){
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}