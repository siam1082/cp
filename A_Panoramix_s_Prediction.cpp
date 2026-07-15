#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

bool nextprime(int n, int m) {
    n++;
    while (!isPrime(n)) {
        n++;
    }
    return n == m;
}

int main() {
    int n, m;
    cin >> n >> m;

    if (nextprime(n, m)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}