// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);

//     for (int i = 0; i < n; i++) cin >> v[i];

//     map<int,int> mp;


//     for (auto x : v) {
//         mp[x]++;
//     }

//     for (auto it = mp.begin(); it != mp.end(); ) {
//         if (it->second == 1) {
           
//             it = mp.erase(it);
//         } else {
//             ++it;
//         }
//     }
//     int mi=INT_MAX;
//     for(auto c:mp.first){
//         mi=min(mi,c);

//     }

  
//}










#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    int mi = *min_element(v.begin(), v.end());

    vector<int> b;
    for (int i = 0; i < n; i++) {
        if (v[i] == mi) b.push_back(i);
    }

 
    int mdist = INT_MAX;
    for (int i = 1; i < b.size(); i++) {
        mdist = min(mdist, b[i] - b[i-1]);
    }

    cout << mdist << '\n';
    return 0;
}
