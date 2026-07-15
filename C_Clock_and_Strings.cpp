#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
void magic(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b) swap(a,b);
    if((c>a && c<b) || (d>a && d<b) ){
        cout<<"YES"<<nl;

    }
    else{
        cout<<"NO"<<nl;

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