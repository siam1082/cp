#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n;
    cin>>n;
    if(n>=1900){
        cout<<"Division 1"<<nl;
        return;
    }
    if(n>=1600){
        cout<<"Division 2"<<nl;
        return;
    }
    if(n>=1400){
        cout<<"Division 3"<<nl;
        return;
    }
    else{
        cout<<"Division 4"<<nl;
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