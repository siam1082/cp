#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n;
    cin >> n;

    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];   
    }

    string ans = s[0]; 

    for(int i = 1; i < n; i++){  
        if(s[i] + ans < ans + s[i]){   
            ans = s[i] + ans;
        }
        else{
            ans = ans + s[i];
        }
    }

    cout << ans << nl;
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
