#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> arr1, arr2, arr3;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) arr1.push_back(i);
        else if (arr[i] == 2) arr2.push_back(i);
        else if (arr[i] == 3) arr3.push_back(i);
    }

    int miin = min({(int)arr1.size(), (int)arr2.size(), (int)arr3.size()});

    if (miin == 0) {
        cout << 0 << "\n";
    } else {
        cout << miin << "\n";
        for (int i = 0; i < miin; i++) {
            cout << arr1[i] + 1 << " " << arr2[i] + 1 << " " << arr3[i] + 1 << "\n";
        }
    }

    return 0;
}