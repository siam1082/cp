#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve(){
    int n;
    cin >> n;

    // 32-bit MSB->LSB বিট-অ্যারে তৈরি (arr[0] = MSB, arr[31] = LSB)
    vector<int> arr(32);
    for (int k = 31; k >= 0; --k) {
        arr[31 - k] = (n >> k) & 1;
    }

    int ans = -1;
    while (ans < n) {
        int tar = 1;

        // std::find iterator দেয়, index বের করতে distance ব্যবহার
        auto it_iter = find(arr.begin(), arr.end(), tar);
        int pos = (int)distance(arr.begin(), it_iter);  // 0..32 (না পেলে 32)
        int it = 32 - pos;  // তোমার এক্সপ্রেশনটা 그대로 রাখলাম
        int i = it;         // i ইউজ হচ্ছিল, তাই সেট করলাম

        int b = (~((1 << (i + 1)) - 1));
        int r = ans ^ b;

        if (r == n) {
            cout << "YES" << nl;
            return;
        } else {
            ans++;
        }
    }
    // যদি while থেকে বেরিয়ে আসে, YES হয়নি
    cout << "NO" << nl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
