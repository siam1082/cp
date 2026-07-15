#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int w,h,a,b;
    cin>>w>>h>>a>>b;
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
        if(abs(y1-y2)%b==0){
            cout<<"YES"<<nl;
            return;
        }
        else{
            cout<<"NO"<<nl;
            return;
        }
    }
    if(y1==y2){
        if(abs(x1-x2)%a==0){
            cout<<"YES"<<nl;
            return;
        }
        else{
            cout<<"NO"<<nl;
            return ;
        }
    }
    if(abs(x1-x2)%a==0 || abs(y1-y2)%b==0){
        cout<<"YES"<<nl;
        return;
    }
    else{
        cout<<"NO"<<nl;
        return;

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

}