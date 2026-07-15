 int n;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        int r = t % 7;

        if (r == 0)
            cout << t << "\n";
        else if (r <= 7 - r)
            cout << t - r << "\n";  
        else
            cout << t + (7 - r) << "\n";  
    }