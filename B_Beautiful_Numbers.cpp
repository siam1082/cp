#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    string s;
    cin >> s;

    int n = s.size();
    vector<int> d;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int digit = s[i] - '0';
        sum += digit;

        if(i == 0)
            d.push_back(digit - 1);   
        else
            d.push_back(digit);      
    }
    sort(d.begin(), d.end(), greater<int>());

    int k = 0;

    for(int i = 0; i < n; i++){
        if(sum <= 9) break;
        sum -= d[i];
        k++;
    }

    cout << k << nl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        magic();
    }
    return 0;
}