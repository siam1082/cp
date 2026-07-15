#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int e=0,o=0;
    for(int i=0;i<n;i++){
        if(i%2!=a[i]%2){
            if(i%2==0){
                e++;
            }
            else{
                o++;
            }
        }
    }
    if(e!=o){
        cout<<-1<<nl;

    }
    else{
        cout<<e<<nl;

    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;

    while(t--){
        solve();
    }
    return 0;

}