#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    double a,b,c;
    cin>>a>>b>>c;
    if(a*b>c){
        cout<<"Yes"<<nl;
        return;

    }
    if(a>c){
        cout<<"Yes"<<nl;
        return;
    }
    if(b>c){
        cout<<"Yes"<<nl;
        return;
    }
    else{
        cout<<"No"<<nl;
    }
//  if(a>c/b || b>c/a){
//     cout<<"Yes"<<nl;
//  }
//  else{
//     cout<<"No"<<nl;
//  }
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

  
        magic();
    
    return 0;
}