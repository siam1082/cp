#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){

    int n;
    cin >> n;
    int x = 1;
    for( int i = 2; i * i <= n ;i ++){
        if(n%i == 0){
            x *= i;
            while(n % i == 0){
            n/=i;
            }
        }
      
    }
      if(n > 1)
        {
             x *= n;
        }
        
    cout << x << nl;
 
}n
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

