#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){

    string s;
    cin>>s;
   
        int l=s.back()-'0';
        if(l%2==1){
            cout<<0<<nl;
            return;
        }
        if(s<9){
            cout<<-1<<nl;
            return;

        }
        for(int i=0;i<n;i++){
            if(s[i]%2==1){
                cout<<1<<nl;
                return;
            }

        }
        for(int i=0;i<n;i++){
            int m=max.element(s.begin(),s.end());
            int s1=s-m;
            for(int i=0;i<n;i++){
            if(s[i]%2==1){
                cout<<2<<nl;
                return;
            }

        }
        cout<<3<<nl;


    
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