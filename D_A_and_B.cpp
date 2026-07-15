// // #include <bits/stdc++.h>
// // using namespace std;
// // #define nl "\n"

// // int min_swaps(char c, const string& s) {
// //     vector<int> pos;
// //     for (int i = 0; i < s.size(); ++i) {
// //         if (s[i] == c) pos.push_back(i);
// //     }
// //     int m = pos.size();
// //     if (m == 0) return INT_MAX; // No such letter, can't cluster
// //     vector<int> b(m);
// //     for (int i = 0; i < m; ++i) b[i] = pos[i] - i;
// //     nth_element(b.begin(), b.begin() + m/2, b.end());
// //     int med = b[m/2];
// //     int cost = 0;
// //     for (int i = 0; i < m; ++i) cost += abs(b[i] - med);
// //     return cost;
// // }

// // void solve() {
// //     int n;
// //     string s;
// //     cin >> n >> s;
// //     int ans = min(min_swaps('a', s), min_swaps('b', s));
// //     cout << ans << nl;
// // }

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(0);
// //     int t;
// //     cin >> t;
// //     while (t--) solve();
// // }

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
// #define ll long long
#define int long long 
int get(vector<int> a) {
    if (a.empty()) return LLONG_MAX; 
    int pos = a.size() / 2;
    int val = 0;
    for (int i = 0; i < a.size(); i++) {
        val += abs(a[pos] - a[i]) - abs(pos - i);
    }
    return val;
}
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') a.push_back(i);
        else b.push_back(i);
    }

    cout << min(get(a), get(b)) << nl;
}


int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}











// #include <bits/stdc++.h>
// #define ent '\n'
// #define int long long

// using namespace std;

// int get(vector<int> a) {
//     if (a.empty()) return LLONG_MAX; 
//     int pos = a.size() / 2;
//     int val = 0;
//     for (int i = 0; i < a.size(); i++) {
//         val += abs(a[pos] - a[i]) - abs(pos - i);
//     }
//     return val;
// }

// void solve() {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     vector<int> a, b;
//     for (int i = 0; i < n; i++) {
//         if (s[i] == 'a') a.push_back(i);
//         else b.push_back(i);
//     }

//     cout << min(get(a), get(b)) << ent;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }