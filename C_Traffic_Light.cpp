#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
void magic(){
    int n;
    char c;
    cin>>n;
    cin>>c;
    string s;
    cin>>s;
    
    // vector<int>v(n,-1);
    // for(int i=0;i<n;i++){
       

    // }
    auto lc = find(s.begin(), s.end(), 'c');
    reverse(s.begin(),s.end());
    auto rg = find(s.begin(), s.end(), 'g');
    auto rc = find(s.begin(), s.end(), 'c');
    cout<<max(abs(lc-rg+1),(abs(rc-rg)))<<nl;
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