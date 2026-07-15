#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){

    
    int n;
    cin >> n;
    vector<int> b(n);
    for (auto &bal : b) {
        cin >> bal;
    }

    int m = -1;
    for (int i = 0; i < n; i++) {
        int w = 1; 

      
        for (int k = i + 1; k < n; k++) {
            if (b[k] < b[i]) break;
            w++;
        }


        for (int k = i - 1; k >= 0; k--) {
            if (b[k] < b[i]) break;
            w++;
        }

        int sum = b[i] * w; 
        m = max(m, sum);
    }

    cout << m << "\n";
}
    return 0;
}