#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int m = *max_element(v.begin(), v.end()); 
    int mi = *min_element(v.begin(), v.end()); 
    int d = m - mi;
    cout << d << " ";
    if(m==mi){
    cout<<(1LL*n*(n-1))/2<<'\n';
    return 0;
    }


    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[v[i]]++; 
    }

    int f_max = mp[m];  
    int f_min = mp[mi];

    cout << f_max * f_min << "\n"; 

    return 0;
}
