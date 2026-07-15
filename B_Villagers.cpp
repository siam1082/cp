#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(),a.end(),greater<int>());

    ll sum = 0;
    if(n%2==0){
    for (int i = 1; i < n; i += 2) {        
       sum+=max(a[i],a[i-1]);
    }
    cout << sum << endl;
}
else{
     for (int i = 1; i < n-1; i += 2) {        
       sum+=max(a[i],a[i-1]);
    }
    sum += a[n-1];
    cout << sum << endl;

}
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
