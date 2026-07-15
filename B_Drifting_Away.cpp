#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();

    for(int i = 0; i < n - 1; i++){
        if((s[i] == '*' && s[i+1] == '<') || 
           (s[i] == '>' && s[i+1] == '*') || 
           (s[i] == '*' && s[i+1] == '*') || 
           (s[i] == '>' && s[i+1] == '<')){
            cout << -1 << nl;
            return;
        }
    }

    int l = 0, r = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '<' || s[i] == '*') l++;
    }
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == '>' || s[i] == '*') r++;
    }

    cout << max(l, r) << nl;
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