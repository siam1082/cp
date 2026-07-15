#include <iostream>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;

    ll k = 0;
    ll cnt = 0;

    while (cnt <= n) {
        k++;
        cnt += (k * (k + 1)) / 2;
    }

    cout << (k - 1) << "\n";
    return 0;
}