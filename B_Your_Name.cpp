#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n;
    cin>>n;
    string s,s1;
    cin>>s>>s1;
 
 
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());

   
        if(s!=s1){
            cout<<"NO"<<nl;
            return ;
        }
   
    cout<<"YES"<<nl;


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