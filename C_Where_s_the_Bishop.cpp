#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n = 8, m = 8;
    char s[8][8];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> s[i][j];
        }
    }

    int a = -1, b = -1;

    for (int i = 1; i < n-1; i++) {       
        for (int j = 1; j < m-1; j++) {
            if (s[i][j] == '#' &&
                s[i-1][j-1] == '#' && s[i-1][j+1] == '#' &&
                s[i+1][j-1] == '#' && s[i+1][j+1] == '#') {

                a = i + 1; 
                b = j + 1;
                break;
            }
        }
        if (a != -1) break; 
    }

    cout << a << " " << b << "\n";
}
return 0;
}
