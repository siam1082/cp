// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int n;
//     cin>>n;
    
//     int len=s.size():
//     vector<int>p(len,0);
    


    

// }




#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;

    int len = s.size();
    vector<int> p(len, 0);

    for(int i = 1; i < len; i++) {
        p[i] = p[i-1] + (s[i] == s[i-1]);
    }

    while(n--){
        int l, r;
        cin >> l >> r;
     
        cout << p[r-1] - p[l-1] << endl;
    }
    return 0;
}