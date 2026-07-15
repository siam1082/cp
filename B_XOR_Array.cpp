// #include <bits/stdc++.h>
// using namespace std;
// #define nl "\n"
// #define ll long long
// #define int long long
// using pii = pair<int, int>;
// void magic(){
//     int n,l,r;
//     cin>>n>>l>>r;
//     vector<int>a[n+1],b[n+1];
//     for(int i=1;i<=n;i++){
//         b[i]=i;
//     }
//     b[r]=l-1;
//     a[1]=b[1];
//     for(int i=2;i<=n;i++){
//         a[i]=b[i]^b[i-1];

//     }
//     for(int i=0;i<n;i++){
//         cout<a[i]<<" ";
//     }
//     cout<<nl;
// }
// int32_t main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while(t--){
//         magic();
//     }
//     return 0;
// }









#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long

void magic(){
    int n,l,r;
    cin>>n>>l>>r;

    vector<int> a(n+1), b(n+1);

    for(int i=1;i<=n;i++){
        b[i]=i;
    }

    b[r]=l-1;   // now valid

    a[1]=b[1];

    for(int i=2;i<=n;i++){
        a[i]=b[i]^b[i-1];   // XOR works because b are ints now
    }

    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<nl;
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
