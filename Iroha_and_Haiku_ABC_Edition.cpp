#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;
    vector<int> a(n);
    
    for (auto &val : a) {
        cin >> val; 
    }

    int c5 = 0, c7 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 5) c5++;
        if (a[i] == 7) c7++;
    }

    cout << ((c5 == 2 && c7 == 1) ? "YES" : "NO") << endl;
    return 0;
}