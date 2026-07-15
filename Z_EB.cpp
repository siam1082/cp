#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int x=0;
        if((a1>=b1 && a2>b2)||(a1>b1 && a2>=b2)){
        x++;
    }
    if((a1>=b2 && a2>b1)||(a1>b2 && a2>=b1)){
        x++;
    }
cout<<2*x<<endl;
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