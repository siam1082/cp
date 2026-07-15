#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
 
int n;
cin >> n;
string s;
cin >> s;

map<char, int> mp;
for (char c : s) {
    mp[c]++;
}

    
    for (auto it : mp) {
        if(it.second>2){
        cout << "NO"<<nl;
        return;
        }
      
       
        
    }
     cout<<"YES"<<nl;

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