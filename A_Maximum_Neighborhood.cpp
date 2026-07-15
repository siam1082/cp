#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
 
    int n;
    cin>>n;
    int x=1;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=x;
            x++;
        }
    }
    if(n==3 ||n==4){
    cout<<arr[n-1][n-2]+arr[n-2][n-2]+arr[n-1][n-3]+arr[n-1][n-1]<<nl;
    return;
    }
    if(n==2){
        cout<<9<<nl;
        return;
    }  
    if(n==1){
        cout<<1<<nl;
        return;
    }
    if(n>4){
        cout<<arr[n-1][n-2]+arr[n-2][n-2]+arr[n-2][n-1]+arr[n-3][n-2]+arr[n-2][n-3]<<nl;
        return;
    }
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









