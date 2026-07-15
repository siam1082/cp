#include <bits/stdc++.h>
using namespace std;

#define nl '\n' 
// BB

int main() {
    const int N = 1300000;  
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i)
                isPrime[j] = false;
        }
    }

    vector<int> primes;
    primes.reserve(100000); 

    for (int i = 2; i <= N && primes.size() < 100000; i++) {
        if (isPrime[i]) primes.push_back(i);
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
           cout << primes[n - 1] << nl;
       
    }

    return 0;
}
