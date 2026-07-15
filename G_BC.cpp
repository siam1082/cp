#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<int> s(v.begin(), v.end());
    if(s.size()==1){
        cout<<"YES"<<nl;
        return;
    }
    bool ok1 =true;
    bool ok2=true;
    multimap<int, int> e, o;

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            e.insert({ v[i], i });
        }
        else {
            o.insert({ v[i], i });
        }
    }

    int pre = -1; 
    for (auto &E : e) {
        int index = E.second;

        if (pre != -1) { 
            if (abs(index - pre) != 2) 
            {
                ok1=false;
            }
        }
        pre = index; 
    }

    int prev = -1; 
    for (auto &O : o) {
        int index = O.second;

        if (prev != -1) { 
            if (abs(index - prev) != 2) 
            {
                ok2=false;
            }
        }
        prev = index; 
    }

    if(ok1 && ok2){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
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
