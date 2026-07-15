#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n;
    cin >> n;

    vector<int> v(n), c;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int j = max_element(v.begin(), v.end()) - v.begin();
    swap(v[j],v[0]);

    for(int i = 0; i < n; i++){
      cout << v[i] << " ";

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