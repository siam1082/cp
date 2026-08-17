#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
int magic(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            ans = mid;
            high = mid - 1;  
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    while (m--) {
        int x;
        cin >> x;
        cout << magic(v, x) << nl;
    }

    return 0;
}