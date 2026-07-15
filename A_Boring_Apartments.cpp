#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int d = n % 10;  
        int cnt = 0;
        int temp = n;

        if (temp == 0) cnt = 1;
        else {
            while (temp > 0) {
                cnt++;
                temp /= 10;
            }
        }

        int sum = (d - 1) * 10 + cnt * (cnt + 1) / 2;  
        cout << sum << endl;
    }
    return 0;
}