#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    string s ;
    cin >> s;
    int n = s.size();
    if(n%2 != 0){
        cout << "No" << nl;
        return ;
    }
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        if( s[i] == '(') {
            cnt++;
        }
        else {
            cnt--;
            if(cnt < 0){
                cout << "No" << nl;
                return ;
            }
        }
    }
    if(cnt  == 0 ){
        cout << "Yes"<< nl;
    }
    else{
        cout << " No" << nl;
    }
 
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    
        magic();

    return 0;
}