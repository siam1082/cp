#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;

void magic(){
    int n,k;
    cin>>n>>k;
    // if(k == 1){
    //     cout<<"YES"<<nl;
    //     cout<<n<<nl;
    //     return;
    // }
    //  if(n%k==0){
    //     cout<<"YES"<<nl;
    //     for(int i=0;i<k;i++){
    //         cout<<n/k<<" ";
    //     }
    //     cout<<nl;
    //     return;
    // } 
    // if(n%k!=0){
    //     int x = (n-(k-1))/(k-1);         
    //     int last = n - x*(k-1);   

    //     if(last > 0 && (x%2 == last%2)){   
    //         cout<<"YES"<<nl;
    //         cout<<last<<" ";
    //         for(int i=0;i<k-1;i++){
    //             cout<<x<<" ";
    //         }
    //         cout<<nl;
    //         return;
    //     }
   // }
   int n1=n-(k-1);
   int n2=n-2*(k-1);
   if(n1>0 && n1%2==1){
    cout<<"YES"<<nl;
 
     cout<<n1<<" ";
    for(int i=0;i<k-1;i++){
        cout<<1<<" ";
    }
    cout<<nl;
    return ;
   }
   if(n2>0 && n2%2==0){
    cout<<"YES"<<nl;
  
    cout<<n2<<" ";
    for(int i=0;i<k-1;i++){
        cout<<2<<" ";
    }
    cout<<nl;
    return;
   }

    cout<<"NO"<<nl;
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
