#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v(26,0);
        for(auto ch:s){
            v[ch-'A']++;
        }
         int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (v[i] >= i + 1) {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    
    return 0;
}