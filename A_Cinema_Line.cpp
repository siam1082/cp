#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long

void magic(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int t25 = 0, t50 = 0;
    for(int i = 0; i < n; i++){
        
        if(v[i] == 25){
            t25++;
        }
        else if(v[i] == 50){
            if(t25 >= 1){
                t25--;
                t50++;
            } else {
                cout << "NO" << nl;
                return;
            }
        }
        else if(v[i] == 100){
            if(t50 >= 1 && t25 >= 1){   
                t50--;
                t25--;
            }
            else if(t25 >= 3){         
                t25 -= 3;
            }
            else{
                cout << "NO" << nl;
                return;
            }
        }
    }
    cout << "YES" << nl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

     magic();
    return 0;
}
