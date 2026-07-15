// #include <bits/stdc++.h>
// using namespace std;
// #define nl "\n"
// #define ll long long
// void solve(){
//     long long n;
//     cin>>n;
//     vector<long long>v(n);
//     for(long long &x:v){

//     }

// }
// long long main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     long long t;
//     cin >>t;

//     while(t--){
//         solve();
//     }

// }


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long &x : v) cin >> x;
 
        long long m = 2;
        while (true) {
            bool ok = false;
            for (long long i = 1; i < n; ++i) {
                if (v[0] % m != v[i] % m) {
                    ok = true;
                    break;
                }
            }
            if (ok) {
                cout << m << '\n';
                break;
            }
            m *= 2;
        }
    }
    return 0;
}