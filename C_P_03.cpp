#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;

void magic(){
    int n;
    cin >> n;

    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

     bool ok;
    if(v[n-1] == "TRUTH"){
         ok = true;
        }
        else 
        {
            ok = false;

        }
    for(int i = n - 2; i >= 0; i--){
        if(v[i] == "LIE"){
            ok = !ok;  
        }
    }

    if(ok){
        cout << "TRUTH" << nl;
    }
    else{
        cout << "LIE" << nl;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    magic();
    return 0;
}
