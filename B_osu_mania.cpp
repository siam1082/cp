#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> ans;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < 4; j++){
            if(s[j] == '#'){
                ans.push_back(j + 1);
            }
        }
    }

    reverse(ans.begin(), ans.end());

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
