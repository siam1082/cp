#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n ;
    cin>> n;
    string s;
    ccin >>s;
    vector <int> a,b,ans;
    bool ok = false;
    for(int i = 1; i < n; i++){
        if(ok){
            a.push_back(i);

        }
        else{
            b.push_back(i);
        }
        if(s[i - 1] == 'o'){
            ok = !ok;
        }
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