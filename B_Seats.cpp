#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans =0;
    for (char c : s)
        if (c == '1') ans++;

    int i = 0;
    while (i < n) {
        if (s[i] == '0') {
            int j = i;
            while (j < n && s[j] == '0') j++;
            int len = j - i;

            if (i == 0 && j == n)      
            {
                ans += (len + 2) / 3;
            }  
            else if (i == 0 || j == n)   
            {
                ans += (len + 1) / 3;
            }
            else       
            {
                 ans += len / 3;
            }                 

            i = j;
        } else i++;
    }

    cout << ans << "\n";
}


int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        magic();
    }
    return 0;
}
