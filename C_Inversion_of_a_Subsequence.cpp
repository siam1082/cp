#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n ;
    cin >> n;
    vector<int> a(n), b(n);

    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin >> b[i];
    }

    if(a == b){
        cout << 0 << nl;
        return;
    }

    int x = accumulate(a.begin(), a.end(), 0LL);
    int y = accumulate(b.begin(), b.end(), 0LL);

    if(x == 0 || y == n){
        cout << -1 << nl;
        return;
    }

    if(x % 2 == 0){
        cout << 2 << nl;
    }
    else{
        cout << 1 << nl;
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