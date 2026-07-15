#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    cin >> x;

    int n = x.size();
    if(n % 2 == 1){
        cout << "NO\n";
        return 0;
    }

    vector<int> cnt(10, 0);
    for(char c : x) cnt[c - '0']++;

    for(int d = 0; d <= 9; d++){
        if(cnt[d] % 2 == 1){
            cout << "NO\n";
            return 0;
        }
    }

    // check for non-zero digit to avoid leading zero
    bool hasNonZero = false;
    for(int d = 1; d <= 9; d++){
        if(cnt[d] > 0){
            hasNonZero = true;
            break;
        }
    }

    if(!hasNonZero){
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    return 0;
}
