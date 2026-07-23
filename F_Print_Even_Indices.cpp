#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(vector<int>& v, int i){
    if(i < 0) return;
    
    if(i % 2 == 0)
        cout << v[i] << " ";
        
    magic(v, i - 1);
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    
    magic(v, n - 1);
    
    return 0;
}