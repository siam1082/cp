#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin >> n ;
    string s;
    cin >> s;
    vector <pair<char , char>> v;
    for(int i =0 ;i<n-1; i++){
        v.push_back({s[i],s[i+1]});
    }
    sort(v.begin(), v.end());

    // vector<string>v;
    // for (int i =0 ; i < n; i ++){
    //     v.push_back(s.substr(i));
    // }
    // sort(v.begin(),v.end());
    for(auto &x : v){
        // if(x.length() >= 2){
        //     cout << x[1] ;
        // }
        cout << x.second;
    }
 cout << nl;
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