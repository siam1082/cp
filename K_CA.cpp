#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    string v;
    cin>>v;
    int s1=0,s2=0;
    for(int i=0;i<3;i++){
        s1+=v[i];
    }
    for(int i=3;i<6;i++){
        s2+=v[i];
    }
    if(s1==s2){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }

//     int s1=0,s2=0;

//     // s1=accumulate(v.begin(),v.begin()+2);
//     // s2=accumulate(v.begin()+2,v.end());
//     for(int i=0;i<3;i++){
//         s1+=v[i];
//     }
//     for(int i=3;i<6;i++){
//         s2+=v[i];
//     }
//     if(s1==s2)
// {
//     cout<<"YES"<<nl;
// }
// else{
//     cout<<"NO"<<nl;
// }
 
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