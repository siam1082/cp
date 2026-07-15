#include <bits/stdc++.h>
using namespace std;

const int N = 200000 + 5;
// dsu from luv 85
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

void Union(int a, int b) {
    a = find(a);
    b = find(b);

    if (a != b) {
        if (sz[a] < sz[b]) swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    cin.ignore(); 

    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        for (int i = 1; i <= n; i++) {
            make(i);
        }

        int success = 0, fail = 0;

        string line;
        while (getline(cin, line)) {
            if (line.empty()) break;

            char type;
            int u, v;
            stringstream ss(line);
            ss >> type >> u >> v;

            if (type == 'c') {
                Union(u, v);
            }
            else if (type == 'q') {
                if (find(u) == find(v))
                    success++;
                else
                    fail++;
            }
        }

        cout << success << "," << fail << "\n";

        if (t) cout << "\n"; 
    }

    return 0;
}