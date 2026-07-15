// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int mi=INT_MIN,ma=0
//     int a[n];
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//         cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             mi=min(mi,arr[i][j]);
//         }
//         a.push(mi);
//     }
//     for(int i=0;i<n;i++){
//         ma=max(ma,a[i]);
        
//     }
//     cout<<ma<<'\n';



//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> r(n); 
    for (int i = 0; i < n; i++) {
        vector<int> row(m);
        for (int j = 0; j < m; j++) {
            cin >> row[j];
        }
        r[i] = *min_element(row.begin(), row.end());
    }

    cout << *max_element(r.begin(), r.end()) << '\n';
    return 0;
}
