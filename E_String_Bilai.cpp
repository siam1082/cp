#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt0=0,cnt1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') cnt0++;
        else cnt1++;
    }
    if(cnt0==1){
        cout<<1<<nl;
       
    }
    else if(cnt1==0){
        cout<<4<<nl;
    }
  
    
    else if(cnt1==n){
        cout<<n<<nl;
    }
    else if(cnt0==n){
        cout<<0<<nl;
    }
    else if(cnt1%cnt0==0  || cnt0%cnt1==0 ){
        cout<<4<<nl;
       
    }
    // else if(cnt0<n && cnt0>1){
    //     cout<<"-1"<<nl;
     
        
    // }
 
    // else if(cnt1==n){
    //     cout<<n<<nl;
       
       
    // }
    // else if(cnt0==n){
    //     cout<<'0'<<nl;
   

    // }
    else{
        cout<<-1<<nl;
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