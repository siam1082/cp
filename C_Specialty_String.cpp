// #include <bits/stdc++.h>
// using namespace std;
// #define nl "\n"
// #define int long long

// void magic(){
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;


//     unordered_map<char,int> freq;
//     for(char c : s){
//         freq[c]++;
//     }

//     for(auto it : freq){
//         if(it.second == 1){
//             cout << "NO" << nl;
//             return;
//         }
//     }

//     vector<int> v(n, -1);

//     bool hasAdjacent = false;

 
//     for (int i = 0; i < n-1; i++){
//         if(s[i] == s[i+1]){
//             hasAdjacent = true;
//             v[i] = 1;
//             v[i+1] = 1;
//         }
//     }

//     if(!hasAdjacent){
//         cout << "NO" << nl;
//         return;
//     }


//     bool changed = true;

//     while(changed){
//         changed = false;

//         for(int i = 0; i < n; i++){
//             if(v[i] == -1){
//                 for(int j = i+1; j < n; j++){              propagation method , which is not standard

//                     if(v[j] == -1 && s[i] == s[j]){

//                         bool allVisited = true;

//                         for(int k = i+1; k < j; k++){
//                             if(v[k] != 1){
//                                 allVisited = false;
//                                 break;
//                             }
//                         }

//                         if(allVisited){
//                             v[i] = 1;
//                             v[j] = 1;
//                             changed = true;
//                         }
//                     }
//                 }
//             }
//         }
//     }


//     for(int i = 0; i < n; i++){
//         if(v[i] != 1){
//             cout << "NO" << nl;
//             return;
//         }
//     }

//     cout << "YES" << nl;
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
#define int long long

void magic(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 0; i + 1 < s.size(); ){
    if(s[i] == s[i+1]){
        s.erase(i, 2);
        if(i > 0) i--;
    }
    else{
        i++;
    }
}

    if(s.size() == 0){
        cout << "YES" << nl;
    }
    else{
        cout << "NO" << nl;
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