#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n;
    cin >> n;

    vector<int> a;   // FIX: declare a

    for (int i = 0; i < n; i++){
        int m;
        cin >> m;

        if(i != 0 && a.back() > m){   
            a.push_back(1);
        }
        a.push_back(m);
    }

    cout << a.size() << nl;

    for(int i = 0; i < a.size(); i++){   
        cout << a[i] << " ";
    }
    cout << nl;
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