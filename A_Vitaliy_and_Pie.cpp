#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    int mp[26] = {0};  
    string s;
    cin >> s;

    int c = 0;
// Array aproach or hashing type
// chat
  

    for (int i = 0; i < 2*n - 2; i++) {
        if (i % 2 == 0) {
           
            int idx = s[i] - 'a';
            mp[idx]++;                 
        } else {
          
            int idx = s[i] - 'A';       
            if (mp[idx] == 0) c++;      
            else mp[idx]--;            
        }
    }
    cout << c << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
