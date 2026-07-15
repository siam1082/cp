// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     if(!(cin >> s)) return 0;

//     map<char, int> freq;
//     for (char c : s) freq[c]++;


//     int cnt = 0;
//     for (auto const &p : freq) {
//         if (p.second % 2 == 1) cnt++;
//     }


//     if (cnt <= 1) {
//         cout << "First" << '\n';
//     } else {
//         if (cnt % 2 == 0) cout << "Second" << '\n';
//         else cout << "First" << '\n';
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     string s; 
//     cin >> s;

//     map<char,int> m;
//     for (char c : s) m[c]++;

//     int single = 0;
//     for (auto [x, y] : m) if (y & 1) single++;

//     if ((single & 1) || single == 0)
//         cout << "First";
//     else
//         cout << "Second";
// }

// int main() {
//     solve();
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    if(!(cin >> s)) return;

    map<char,int> m;
    for (char c : s) m[c]++;

    int single = 0;
    for (auto [x, y] : m) if (y & 1) single++;

    if ((single & 1) || single == 0)
        cout << "First\n";
    else
        cout << "Second\n";
}

int main() {
    solve();
    return 0;
}