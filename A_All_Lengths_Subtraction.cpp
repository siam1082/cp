#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
   
    int i = 1;
   
    while(i < n && v[i] > v[i-1]){
      
        i++;
    }
  
    while(i < n && v[i] < v[i-1]){
       
        i++;
    }
   
    if(i != n){
        cout << "NO" << nl;
        return;
    }
    else{
        cout<<"YES"<<nl;

    }
   
   
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}