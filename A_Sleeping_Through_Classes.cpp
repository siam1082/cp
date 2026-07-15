#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long

void magic(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;



    int cnt = 0;     
    int x = 0;   

    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            x = m;      
        }
        else{ 
            if(x > 0) x--;
            else cnt++;     
        }
    }

    // int cnt=0;
    // int ans=0;
    // int f=-1,l=-1;
    // for(int i=0;i<n;i++){
    //     if(s[i]=='1'){
    //         f=i;
    //         break;
    //     }
    //     else{
    //         ans++;
    //     }
    // }
  
    //  for (int i = s.size() - 1; i >= 0; i--) {
    //     if(s[i]=='1'){
    //         l=i;
    //         break;

    //     }
    //     else{
    //         cnt++;

    //     }

    // }
    // if(cnt>=m){
    //     cnt-=m;
    // }

    // int prev=f;
    //    for(int i=f+1;i<=l;i++){
    //     if(s[i]=='1'){
    //         int gap = i-prev-1;     
    //         int rem = gap-m;

    //         if(rem > 0) cnt += rem;

    //         prev = i;
    //     }
    // }

    // for(int i=0;i<n;i++){

    //     if(s[i]=='0') cnt++;

    //     if(s[i]=='1'){
    //         int last1 = -1;

    //         // m range full scan, last '1' save
    //         for(int j=i+1; j<n && j<i+m; j++){
    //             if(s[j]=='1') last1 = j;
    //         }

    //         if(last1 != -1){
    //             // last '1' paoa gese → sekhan theke abar loop cholbe
    //             i = last1 - 1;  
    //         }
    //         else{
    //             // kuno 1 nai → m skip
    //             i += m;
    //         }
    //     }
    // }

     cout<<cnt<<nl;
    
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin>>t;
    while(t--) magic();
}
