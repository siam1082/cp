#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
long long kadane(vector<long long> &a) {
    long long max_sum = a[0], curr = a[0];
    for(int i = 1; i < a.size(); i++) {
        curr = max(a[i], curr + a[i]);
        max_sum = max(max_sum, curr);
    }
    return max_sum;
}

void magic() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    bool all_zero = true;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
        if(b[i] != 0) all_zero = false;
    }

    if(all_zero) {
        cout << kadane(a) << "\n";
        return;
    }


    if(k % 2 == 0) {
        cout << kadane(a) << "\n";
        return;
    }
vector<ll> prefixSum(n), suffixSum(n);
prefixSum[0] = a[0];
for (int i = 1; i < n; i++)
    prefixSum[i] = max(a[i],prefixSum[i-1] + a[i]);

suffixSum[n-1] = a[n-1];
for (int i = n-2; i >= 0; i--)
    suffixSum[i] = max(a[i],suffixSum[i+1] + a[i]);


    int idx = 0;
   int ans=kadane(a);
    for(int i = 0; i < n; i++) {
        // if(b[i] > max_b) {
        //     max_b = b[i];
        //     idx = i;
        // }
        int x= prefixSum[i]+ suffixSum[i]-a[i];
        int z=x+b[i];
        ans=max(ans,z);

    }

   cout<<ans<<nl;
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
