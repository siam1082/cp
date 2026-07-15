// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<char >v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         int z=0,o=0;
//         for(int i=0;i<n;i++){
//             if(v[i]=='0'){
//                 z++;
//             }
//             else{
//                 o++;

//             }
//         }
//         int a=min(z,o);
//         if(a%2==0){
//             cout<<"NET"<<'\n';
//         }
//         else{
//             cout<<"DA"<<'\n';
//         }
    
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int z = 0, o = 0;
        for (char c : s) {
            if (c == '0') z++;
            else o++;
        }
        int a = min(z, o);
        if (a % 2 == 0)
            cout << "NET\n";
        else
            cout << "DA\n";
    }
    return 0;
}
