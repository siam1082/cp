#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &val : v) {
        cin >> val;
    }

    long long s = 0;
   

    for (int i = 1; i < n; i++) {
        if (v[i] < v[i-1]) {
            s +=v[i-1]-v[i];
        
                  
        }
    }

    cout << s << "\n";
    return 0;
}
