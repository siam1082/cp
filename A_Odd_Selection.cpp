#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0) even++;
        if(v[i]%2==1) odd++;

    }
    
    // if(m%2==1 && m<=odd || m>=odd){
    //     cout<<"Yes"<<nl;
    //     return;
    // }
    // if(m%2==0 && odd<m){
    //     cout<<"Yes"<<nl;
    //     return;
    // }
    // if(odd==0){
    //     cout<<"No"<<nl;
    //     return;
    // }
    // if(odd%2==0) odd--;
 
    // while(odd>m) odd-=2;
 
    // if(odd+even>=m){
    //     cout<<"Yes"<<nl;
    // }else{
    //     cout<<"No"<<nl;
    // }



    if (m % 2 == 1) {
   
    if (odd >= 1 && odd + even >= m) cout << "Yes"<<nl;
    else cout << "No"<<nl;
} else {
   
    if (odd >= 1 && odd + even >= m && even >= 1) cout << "Yes"<<nl;
    else cout << "No"<<nl;
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