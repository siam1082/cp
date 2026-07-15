// #include <bits/stdc++.h>
// using namespace std;
// #define nl "\n"
// #define ll long long

// int binary_search_index(vector<int>& arr, int target) {
//     int l = 0, r = arr.size() - 1;
//     int ans = -1;
//     while (l <= r) {
//         int m = l + (r - l) / 2;
//         // if (arr[m] == target) return m;
//          if (arr[m] <= target) {
//             ans = m;
//             l = m + 1;
//         } else {
//             r = m - 1;
//         }
//     }
//     return ans+1;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
    
//     int n,m;
//     cin>>n>>m;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
    
//     vector<int> c(m);
//     for(int i=0;i<m;i++){
//         cin>>c[i];
//     }

//     sort(v.begin(),v.end());

//     vector<int> b;
//     for(int i=0;i<m;i++){
//         int x = binary_search_index(v, c[i]);
//         b.push_back(x);
//     }

//     for(int j=0;j<m;j++){
//         cout<<b[j]<<" ";
//     }
//     cout<<nl;

//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;

    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    vector<int> c(m);
    for(int i=0;i<m;i++){
        cin>>c[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        auto ub = upper_bound(v.begin(), v.end(), c[i])-v.begin();
        cout<<ub<<" ";
    }

    return 0;
}