#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

const int N = 200000 + 5;
int parent[N];
int sz[N];

void make(int v) {
    parent[v] = v;
    sz[v] = 1;
}

int find(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}

bool Union(int a, int b) {
    a = find(a);
    b = find(b);

    if (a == b) return false;

    if (sz[a] < sz[b]) swap(a, b);

    parent[b] = a;
    sz[a] += sz[b];
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;  

    while(cin >> n >> m) {

        if(n == 0 && m == 0) break;

        vector<pair<int, pair<int,int>>> edges;
        edges.reserve(m);

        for(int i = 0; i < m; i++) {
            int u, v, wt;
            cin >> u >> v >> wt;
            edges.push_back({wt, {u, v}});
        }

        sort(edges.begin(), edges.end());

        int ans = INT_MAX;

        for(int i = 0; i < m; i++) {

            for(int j = 1; j <= n; j++) {
                make(j);
            }

            int cnt = 0;
            int mn = edges[i].first;
            int mx = mn;

            for(int j = i; j < m; j++) {
                int wt = edges[j].first;
                int u = edges[j].second.first;
                int v = edges[j].second.second;

                if(Union(u, v)) {
                    cnt++;
                    mx = wt;
                    if(cnt == n - 1) break;
                }
            }

            if(cnt == n - 1) {
                ans = min(ans, mx - mn);
            }
        }

        if(ans == INT_MAX) cout << -1 << nl;
        else cout << ans << nl;
    }

    return 0;
}