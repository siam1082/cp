void solve(){
    int u, v; cin >> u >> v;
    int t, d; cin >> t >> d;
    int ans = u + v;
    t -= 2;
    vector<int>a;

    while(t > 1) {
        if(u < v) {
            u += d;
            a.push_back(u);
        } 
        else {
            v += d;
            a.push_back(v);
        }
        t--;
    }
    if (t == 1) {
        int minx = min(u, v);
        a.push_back(minx + d);
    }
    
    int sum = accumulate(all(a), 0LL);
    cout << ans + sum << nl;
}