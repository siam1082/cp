#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;

void magic(){
    int n, m;
    cin >> n >> m;

    vector<string> vecA(n), vecB(m);
    set<string> setA;

    for(int i = 0; i < n; i++){
        cin >> vecA[i];
        setA.insert(vecA[i]);
    }
    //com
    int cnt = 0;
    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        for(auto &str : vecA){
            if(str == s) {
                cnt++;
                break;
            }
        }
    }

    if(n > m){
        cout << "YES" << nl;
        return;
    }
    if(n < m){
        cout << "NO" << nl;
        return;
    }

    if(cnt % 2 == 1){
        cout << "YES" << nl;
    }
    else{
        cout << "NO" << nl;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
        magic();
    return 0;
}
