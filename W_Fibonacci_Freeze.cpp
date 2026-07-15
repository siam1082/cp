#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
string add(string a, string b) {
    string result = "";
    int carry = 0;

    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<string> fib(5001);
    fib[0] = "0";
    fib[1] = "1";

    for (int i = 2; i <= 5000; i++) {
        fib[i] = add(fib[i - 1], fib[i - 2]);
    }

    int n;
    while (cin >> n) {
        cout << "The Fibonacci number for " << n << " is " << fib[n] << nl;
    }

    return 0;
}