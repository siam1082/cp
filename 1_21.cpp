#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    string n , m ;
    cin >> n >>m;
    string s = n + m;
    int x = stoll(s);
    int y = sqrtl(x);
    if(y * y != x)
    {
        cout << "No" << nl;

    }
    else{
        cout<<"Yes" << nl;
    }

 
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

 
        magic();
    
    return 0;
}