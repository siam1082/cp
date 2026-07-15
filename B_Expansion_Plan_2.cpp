#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int cnt4=0;
    for(int i=0;i<n;i++){
        if(s[i]=='4'){
            cnt4++;
        }
    }
    int cnt8=n-cnt4;
    a=abs(a);
    b=abs(b);
    a=max(0LL,a-cnt8);
    b=max(0LL,b-cnt8);
    if(a==0 && b==0){
        cout<<"YES"<<nl;
        return;
    }
    if(a+b<=cnt4){
        cout<<"YES"<<nl;
        return ;
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