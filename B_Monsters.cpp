// #include <bits/stdc++.h>
// using namespace std;
// #define nl "\n"
// #define int long long

// void magic() {
//     int n, k;
//     cin >> n >> k;

//     vector<int ,int>v(n);
//       for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;

//         x %= k;
//         if (x == 0) x = k;

//         v.push_back({ i + 1,x}); // {value, index}
//     }
//     // vector<int> v(n);
//     // for (int i = 0; i < n; i++) {
//     //     cin >> v[i];
//     //     v[i] %= k;
//     //     if (v[i] == 0) v[i] = k;
//     // }

//     // vector<int> b(n);
//     // iota(b.begin(), b.end(), 0);

//     // sort(b.begin(), b.end(), [&](int i, int j) {
//     //     if (v[i] != v[j]) return v[i] > v[j];
//     //     return i < j;   // stability
//     // // });
//     sort(v.begin(),v.end());


//     for (auto x : v) {
//         cout << x + 1 << " ";
//     }
//     cout << nl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         magic();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define int long long

void magic() {
    int n, k;
    cin >> n >> k;

    vector<pair<int,int>> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        x %= k;
        if (x == 0) x = k;
        v.push_back({x, i + 1});
    }

    sort(v.begin(), v.end(), [&](auto &a, auto &b) {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    });

    for (auto &p : v) {
        cout << p.second << " ";
    }
    cout << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        magic();
    }
    return 0;
}

