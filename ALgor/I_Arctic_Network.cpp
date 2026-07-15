#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
const int N = 505;
// again dsu + mst, template by luv 

int parent[N];
int sz[N];

void make(int v){
    parent[v] = v;
    sz[v] = 1;
}

int find(int v){
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}

bool Union(int a, int b){
    a = find(a);
    b = find(b);

    if(a == b) return false;

    if(sz[a] < sz[b]) swap(a, b);

    parent[b] = a;
    sz[a] += sz[b];
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int S, P;
        cin >> S >> P;

        vector<pair<int,int>> op(P+1);

        for(int i = 1; i <= P; i++){
            cin >> op[i].first >> op[i].second;
        }

        vector<pair<double, pair<int,int>>> edges;

        for(int i = 1; i <= P; i++){
            for(int j = i+1; j <= P; j++){
                double dx = op[i].first - op[j].first;
                double dy = op[i].second - op[j].second;
                double dist = sqrt(dx*dx + dy*dy);
                edges.push_back({dist, {i, j}});
            }
        }

        sort(edges.begin(), edges.end());

        for(int i = 1; i <= P; i++){
            make(i);
        }

        vector<double> mstEdges;

        for(auto &e : edges){
            double w = e.first;
            int u = e.second.first;
            int v = e.second.second;

            if(Union(u, v)){
                mstEdges.push_back(w);
            }
        }

        sort(mstEdges.begin(), mstEdges.end(), greater<double>());

      
        double ans = mstEdges[S-1];

        cout << fixed << setprecision(2) << ans << nl;
    }

    return 0;
}