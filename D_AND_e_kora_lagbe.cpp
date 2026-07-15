#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> ans;
        ans.push_back(n);

        for(int i = 0; i < 61; i++){
            if(((n >> i) & 1) == 0){
                long long x = n | (1LL << i);
                if(x < (long long)1e18){
                    ans.push_back(x);
                }
            }
        }

        cout << ans.size() << "\n";
        for(long long x : ans){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
