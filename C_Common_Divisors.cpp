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
    int g=v[0];
    for(int i=1;i<n;i++){
        g=__gcd(g,v[i]);

    }
    //   if (g == 0) {
    //     cout << 0 << nl;
    //     return;
    // }
    int cnt=0;
    for(int i=1;i*i<=g;i++){
        if(g%i==0) {
            cnt++;
            if(i!=g/i) cnt++;
    }
}
    cout<<cnt<<nl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
        magic(); 
    
    return 0;
}