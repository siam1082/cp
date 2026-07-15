#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int r = n / 7;                
    
    while (r >= 0 && (n - 7 * r) % 4 != 0) {
        --r;
    }
    if (r < 0) {                   
        cout << -1 << nl;
        return 0;
    }

    int l = n - 7 * r;              
    int x = l / 4;                

    string s;
    s.append(x, '4');              
    s.append(r, '7');               
    cout << s << nl;
    return 0;
}
