#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    { 
        cin >> a[i];
    }
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            int tar = i;
            int cur = a[i]; 
            while (tar % 2 == 0) 
            {
                tar = tar/ 2;
            }
            while (cur % 2 == 0)
            { 
                cur = cur / 2;
            }
            
            if (tar != cur) {
                ok = false;
                break;
            }
        }
        if (ok){
             cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
    }
}
 

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        magic();
    }
    return 0;
}