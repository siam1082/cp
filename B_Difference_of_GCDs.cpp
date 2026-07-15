// #include <bits/stdc++.h>
// using namespace std;
// #define nl "\n"
// #define ll long long
// void solve(){
//     int n ,l ,r;
//     cin>>n>>l>>r;
//     vector<int>v;
//     for(int i=1;i<=n;i++){
//         int m=(l+i-1)/i;
//         int b=m*i;
//         if(b>r){
//             cout<<"NO"<<nl;
//             return ;
//         }
//         else{
//             v.push_back(b);
//         }

//     }
//     cout<<"YES"<<nl;
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<nl;


// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >>t;

//     while(t--){
//         solve();
//     }

// }












#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n ,l ,r;
    cin>>n>>l>>r;

    for(int i=1;i<=n;i++){
        if(l/i*i>r){
            cout<<"NO"<<nl;
            return;
        }
        

    }
    cout<<"YES"<<nl;
    for(int i=1;i<=n;i++){
        cout<<l/i*i<<" ";
    }
    cout<<nl;


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




#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n ,l ,r;
    cin>>n>>l>>r;

    for(int i=1;i<=n;i++){
        if((l-1+i)/i*i>r){
            cout<<"NO"<<nl;
            return;
        }
        

    }
    cout<<"YES"<<nl;
    for(int i=1;i<=n;i++){
        cout<<(l-1+i)/i*i<<" ";
    }
    cout<<nl;


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




