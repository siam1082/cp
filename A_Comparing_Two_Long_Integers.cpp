#include<bits/stdc++.h>
using namespace std;

string f(string s) {
    int pos = s.find_first_not_of('0');
    if(pos == string::npos) return "0"; 
    return s.substr(pos);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, s1;
    cin >> s >> s1;

    s = f(s);
    s1 = f(s1);

    if(s.size() < s1.size()) cout << "<\n";
    else if(s.size() > s1.size()) cout << ">\n";
    else {
        if(s == s1) cout << "=\n";
        else if(s < s1) cout << "<\n";
        else cout << ">\n";
    }

    return 0;
}
