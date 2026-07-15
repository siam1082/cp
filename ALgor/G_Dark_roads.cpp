#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
// mst + dsu by luv

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

    int m, n;   // m = nodes, n = edges

    while(cin >> m >> n) {

        if(m == 0 && n == 0) break;

        vector<pair<int, pair<int,int>>> edges;
        edges.reserve(n);

        ll tc = 0;

        for(int i = 0; i < n; i++) {
            int u, v, wt;
            cin >> u >> v >> wt;
            edges.push_back({wt, {u, v}});
            tc += wt;
        }

        sort(edges.begin(), edges.end());

        for(int i = 0; i < m; i++) {
            make(i);
        }

        ll mst_cost = 0;

        for(auto &edge : edges) {
            int wt = edge.first;
            int u = edge.second.first;
            int v = edge.second.second;

            if(Union(u, v)) {
                mst_cost += wt;
            }
        }

        cout << tc - mst_cost << nl;
    }

    return 0;
}