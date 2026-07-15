// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int sum=0;
//     map<char,int>mp;
//     for(int i=0;i<s.size();i++){
//         mp[s[i]]++;
//     }
//     for(int i=0;i<s.size();i++){
//         sum+=(mp[s[i]]);
//     }
//     cout<<sum<<'\n';
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

// 🔹 Sieve of Eratosthenes: Generate all primes up to n
vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

void solve(){
    // Your code here
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}