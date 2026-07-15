#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if(n == k) {
        
            vector<char> v(n, '-');
            for(char ch : v) cout << ch;
            cout << '\n';
            continue;
        }

        int z = 0, o = 0, twos = 0;
        for(int i = 0; i < k; i++) {
            if(s[i] == '0') z++;
            else if(s[i] == '1') o++;
            else twos++;
        }

        vector<char> v(n, '+');

  
        for(int i = 0; i < z; i++){
             v[i] = '-';
        }
        for(int i = 0; i < o; i++) 
        {
            v[n - 1 - i] = '-';
        }
        for(int i = 0; i < twos; i++) {
            if(v[z + i] == '+') v[z + i] = '?';
            if(v[n - 1 - o - i] == '+') v[n - 1 - o - i] = '?';
        }

        for(char ch : v)
        {
             cout << ch;
            }
        cout << '\n';
    }
}
