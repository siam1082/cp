#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
// void magic(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     int l=s.size(); 
//     if(s.size()<3){
//         cout<<s.size()<<nl;
//         return;
//     }
   
//     // for(int i=0;i<n-2;i++){
//     //     if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
//     //         l-=3;

//     //     }
//     // }
//     // for(int i=0;i<n;i++){
//     //     if(s[i]=='0' && s[i+1]=='1'){
//     //         l-=3;
//     //         i+=3;
//     //     }
//     //       if(s[i]=='1' && s[i+1]=='0'){
//     //         l-=3;
//     //         i+=3;
//     //     }
//     //     else{

//     //     }
//     // }
//     int o=0,z=0;
//     for(int i=0;i<n;i++){
//         if(s[i]=='0') z++;
//         else{
//             o++;
//         }

//     }
//     int m=min(z,o,n/3);

    
//     cout<<n-3*m<<nl;
// }

void magic() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int z = 0, o = 0;
    for (char c : s) {
        if (c == '0') z++;
        else o++;
    }

    int m = min({z, o, n / 3});
    cout << n - 3 * m << '\n';
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