#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
const int MAX = 1000005;
bool is_prime[MAX];
int pref[MAX];

int digit_sum(int n) {
    int s = 0;
    while(n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}
void sieve() {
    fill(is_prime, is_prime + MAX, true); 
    is_prime[0] = is_prime[1] = false;
    
    for (int p = 2; p * p < MAX; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i < MAX; i += p)
                is_prime[i] = false;
        }
    }
    for (int i = 1; i < MAX; i++) {
        pref[i] = pref[i - 1];
        if (is_prime[i] && is_prime[digit_sum(i)]) {
            pref[i]++;
        }
    }
}

void magic() {
    int t1, t2;
    if (scanf("%lld %lld", &t1, &t2) != EOF) { // q e bola chilo bole aita deya lagche 
        printf("%lld\n", pref[t2] - pref[t1 - 1]);  
    }
}

int32_t main() {
    sieve(); 
    
    int t;
    if (scanf("%lld", &t) != EOF) { // ai 
        while(t--) {
            magic();
        }
    }
    return 0;
}