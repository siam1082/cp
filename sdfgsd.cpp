void solve() {
    long long len, tab, n;
    cin >> len >> tab >> n;

    if (len == tab || n == 1 || len/n>=tab) {
        cout << 1 << nl;
        return;
    } else if (tab != 0 && len / tab ==n && len % tab == 0) {
        cout << 1 << nl;
        return;
    } else {
        cout << 2 << nl;
    }
}