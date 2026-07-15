#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
// mst problem ,
const int N = 2e3+5;

int parent[N];
int sz[N];

void make(int v ){
    parent[v]=v;
    sz[v] = 1;
}

int find(int v){
    if(v == parent[v]) return v;
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

    int n;
    cin >> n;

    vector<pair<int ,int>> cities(n+1);

    for(int i = 1; i <= n; ++i){
        cin >> cities[i].first >> cities[i].second;
    }

    vector<int> c(n+1), k(n+1);

    for(int i = 1; i <= n; ++i){
        cin >> c[i];
    }

    for(int i = 1; i <= n; ++i){
        cin >> k[i];
    }

    vector<pair<ll, pair<int,int>>> edges;
    vector<int> power;
    vector<pair<int,int>> ed_con;

    for(int i = 1; i <= n; ++i ){
        edges.push_back({c[i], {0 , i }});
    }

    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            ll dist = abs(cities[i].first - cities[j].first) 
                    + abs(cities[i].second - cities[j].second);

            ll cost = dist * 1LL * (k[i] + k[j]);
            edges.push_back({cost, {i, j}});
        }
    }

    sort(edges.begin(), edges.end());

    for(int i = 0; i <= n; i++) {
        make(i);
    }

    ll mst_cost = 0;

    for(auto &edge : edges) {
        ll wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;

        if(find(u) == find(v)) continue;
        Union(u, v);
        mst_cost += wt;

        if(u == 0 || v == 0){
            power.push_back(max(u, v));
        }
        else{
            ed_con.push_back({u, v});   // FIXED HERE
        }
    }

    cout << mst_cost << nl;

    cout << power.size() << nl;
    for(int st : power){
        cout << st << " ";
    }
    cout << nl;

    cout << ed_con.size() << nl;
    for(auto &c : ed_con){
        cout << c.first << " " << c.second << nl;
    }

    return 0;
}