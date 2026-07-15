#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if(v[0] == v[n-1]){
        cout << -1 << nl;
        return;
    }

    int i = 1;
    while(i < n && v[0] == v[i]) i++;
    cout << i << " " << n - i << nl;
    for(int j = 0; j < i; j++) cout << v[j] << " ";
    cout << nl;

    for(int j = i; j < n; j++) cout << v[j] << " ";
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