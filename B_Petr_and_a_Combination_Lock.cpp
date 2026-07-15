#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;

void magic(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < (1 << n); i++){  
        int s = 0;

        for(int j = 0; j < n; j++){     
            if(i & (1 << j))             
                s -= v[j];
            else                      
                s += v[j];
        }

        if(s % 360 == 0){
            cout << "YES" << nl;
            return;
        }
    }

    cout << "NO" << nl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    magic();
    return 0;
}
