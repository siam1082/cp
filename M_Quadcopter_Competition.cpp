#include <bits/stdc++.h>
#define ll long long
using namespace std;
int c(ll x1,ll x2){
    ll ans=0;
      if (x1 < x2) {
        ans += 2 * abs((x2 + 1) - x1);
    } else if (x1 > x2) {
        ans += 2 * abs(x1 - (x2 - 1));
    } else {
        ans += 4;
    }
    return ans;
}
int main(){
ll x1,x2,y1,y2,ans=0;
    cin>>x1>>y1;
 cin >> x2 >> y2;
    ll a=c(x1,x2)+c(y1,y2);

    cout << a << '\n';
    return 0;
}
