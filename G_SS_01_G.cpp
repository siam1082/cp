#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
const int N = 1e8;
int dp[N];
int dps(int i ,int j){
    if(j == 0){
        return 0;
    }
    dp[0] = i * (i+1);
    for(int i= 1 ;i <n; i++){
        dp[i] = dp[i-1] * i * (i+1);
    }
    
}
void magic(){
    int n , m;
    cin >> n >>m;
    dps(i, j);

 
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