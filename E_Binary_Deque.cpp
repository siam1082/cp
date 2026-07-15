// #include <bits/stdc++.h>
// using namespace std;
// #define nl "\n"
// #define ll long long
// int find(vector<int>& v, int tar){
//         stack<int> st;
//         int s=0;
//         for(int i=0;i<v.size();i++ ){
//             if(s+v[i]<tar){
//                 st.push(v[i]);
//                 s=s+v[i];
//                 if(s==tar){
//                     cout<<v.size()-i-1<<nl;
//                 }
//                 else
//                 {
//                     break;
//                 }

//             }

//         }
//         cout<<'-1'<<nl;
//         return 0;
//     }


// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >>t;

//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         vector<int>v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }


//         find(v,m);
//     }
//     return 0;

// }




// #include <bits/stdc++.h>
// using namespace std;

// int rem(vector<int>& a, int s) {
//     int n = a.size();
//     int sum = accumulate(a.begin(), a.end(), 0);

//     if (sum < s) return -1;
//     if (sum == s) return 0;

//     int mlen = -1, curr= 0, l = 0;
//     for (int r = 0; r < n; r++) {
//         curr+= a[r];

//         while (curr> s && l <= r) {
//             curr-= a[l++];
//         }

//         if (curr== s) {
//             mlen = max(mlen, r - l + 1);
//         }
//     }

//     return (mlen == -1) ? -1 : n - mlen;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, s;
//         cin >> n >> s;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         cout << rem(a, s) << "\n";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

int solve(vector<int>& v, int tar) {
    int n = v.size();
    int s = accumulate(v.begin(), v.end(), 0);

    if (s < tar) {
        cout << -1 << nl;
        return 0;
    }
    if (s == tar) {
        cout << 0 << nl;
        return 0;
    }

    int len = -1, curr = 0, l = 0;
    for (int r = 0; r < n; r++) {
        curr += v[r];

        while (curr > tar && l <= r) {
            curr -= v[l++];
        }

        if (curr == tar) {
            len = max(len, r - l + 1);
        }
    }

    if (len == -1) {
        cout << -1 << nl;
    } else {
        cout << n - len << nl;
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        solve(v, m);
    }

    return 0;
}
