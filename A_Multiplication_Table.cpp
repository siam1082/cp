#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    // if(n*2<k){
    //     cout<<0<<'\n';
    //     return 0;
    // }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(k % i == 0 && k/i <= n) cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}
