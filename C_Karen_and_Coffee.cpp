#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
int ar[200005], cnt[200005];

void magic() {
    int n, k, q;
    cin >> n >> k >> q;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        ar[a]++;
        ar[b+1]--;
    }
    for(int i = 1; i <= 200001; i++){
        ar[i] += ar[i-1];
        if(ar[i] >= k){
            cnt[i] = 1;
        }
        cnt[i] += cnt[i-1];
    }
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        int d = cnt[b] - cnt[a-1];
        cout << d << nl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    magic();
    return 0;
}
