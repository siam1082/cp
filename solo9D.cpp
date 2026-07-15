#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic() {
    int n;
    cin >> n;
    
    string str;
    cin >> str;

    int c = 0;
    int j = n - 1;
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[j]) {
            c++;
        }
        j--;
    }
   
        cout << (c +1)/ 2 << nl;
    
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
        while (t--) {
            magic();
        
    }
    
    return 0;
}