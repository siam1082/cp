#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a = 360;
        int b = 180 - n;
        if (b != 0 && a % b == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}