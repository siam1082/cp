#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin >> s >> s1;
    vector<char> ch;
    ch.push_back(s[0]);

    for(int i = 1; i < s.size(); i++){
        if(s[i] >= s1[0]){
            break;
        }
        else{
            ch.push_back(s[i]);
        }
    }

    ch.push_back(s1[0]); 

    for(int i = 0; i < ch.size(); i++){
        cout << ch[i];
    }
    cout << '\n';

    return 0;
}
