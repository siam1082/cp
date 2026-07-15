#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){  // new -> next permutation , rank  , iota function 
    
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; ++i) cin >> p[i];
    for (int i = 0; i < n; ++i) cin >> q[i];

    vector<int> perm(n);
    iota(perm.begin(), perm.end(), 1);
 
    int a = 0, b = 0;
    int rank = 1;

    do {
        if (perm == p) a = rank;
        if (perm == q) b = rank;
        rank++;
    } while (next_permutation(perm.begin(), perm.end()));

    cout << abs(a - b) << "\n";

 
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);


        magic();

    return 0;
}