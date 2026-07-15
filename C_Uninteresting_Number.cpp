// #include <bits/stdc++.h>
// using namespace std;
// #define nl "\n"
// #define ll long long
// // 11092025:14:10

// void solve(){
//     ll n;
//     cin >> n;
//     vector<int> v;

//     while (n > 0) {
//         int d = n % 10;
//         v.push_back(d);
//         n = n / 10;
//     }

//     ll sum = accumulate(v.begin(), v.end(), 0LL); 

//     if (sum % 9 == 0) {
//         cout << "YES" << nl;
//         return;
//     }

//     // sort(v.begin(), v.end()); 


//     for (int i = 0; i < (int)v.size(); i++) {
//         if (v[i] <= 3) { 
//             sum = sum - v[i] + 1LL * v[i] * v[i]; 
//             // sum=sum+1LL*v[i];   false beacuse it just add an v[i],
//             if (sum % 9 == 0) {
//                 cout << "YES" << nl;
//                 return;
//             }
//         }
//     }

//     cout << "NO" << nl;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;

//     while (t--){
//         solve();
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
//11092025:14:32

void solve() {
    string s;
    cin >> s;
    int ans = 0;
    int sum = 0;
    int c2 = 0, c3 = 0;
    int n = s.size();   

    for (int i = 0; i < n; i++) {
        if (s[i] == '2') {
            c2++;
        }
        if (s[i] == '3') {
            c3++;
        }
        sum += s[i] - '0';   
    }

    bool ok = false;        

 
    for (int i = 0; i <= c3; i++) {
        for (int j = 0; j <= c2; j++) {
            int add = 6 * i + 2 * j;  
            if ((sum + add) % 9 == 0) {
                ok = true;
                break;
            }
        }
        if (ok) break;
    }

    cout << (ok ? "YES" : "NO") << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
