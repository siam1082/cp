#include <bits/stdc++.h>
using namespace std;

int mex(vector<int>& v) {
    unordered_set<int> s(v.begin(), v.end()); 
    int m = 0;
    while (s.count(m)) m++;
    return m;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;              
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
    
        cout << mex(v) << "\n";  
    }
    return 0;
}
