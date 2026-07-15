#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    int c=0;


    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 0) {
            c++;
            
              
        }
    }
    if(c>0){
        cout<<"NO"<<nl;
        return;
    }
    for(int i=0;i<n;i++){
         if(v[i]!=-1){
        s.insert(v[i]);
        }

    }
    if(s.size()==1 || s.size()==0){
        cout<<"YES"<<nl;

    }
    else{
        cout<<"NO"<<nl;
    }


  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

