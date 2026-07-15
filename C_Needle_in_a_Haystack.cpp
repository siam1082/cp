#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;

bool isSubSeq(const string& s1, const string& s2){
    int m = s1.length(), n = s2.length();

    if (m > n) return false;
  
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
  
    return i == m;
}
void magic(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    if(isSubSeq(s1,s2)){

    }
    else{
        cout<<"Impossible"<<nl;
    }
 
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        magic();
    }
    return 0;
}