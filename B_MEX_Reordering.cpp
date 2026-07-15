#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int cnt0 = 0, cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 0) cnt0++;
        if(v[i] == 1) cnt1++;
    }
// excellent logic bruh

    if(cnt0 == 0){
        cout << "NO" << nl;
    }
    else if(cnt0 == 1){
        cout << "YES" << nl;
    }
    else{ 
        if(cnt1 == 0){
            cout << "NO" << nl;
        }
        else{
            cout << "YES" << nl;
        }
    }
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