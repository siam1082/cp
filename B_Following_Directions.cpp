#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0, y=0;
        int ok = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='U') y++;
            if(s[i]=='D') y--;
            if(s[i]=='L') x--;
            if(s[i]=='R') x++;
            if(x==1 && y==1){
                ok = 1;
                break;
            }
        }
        if(ok){
            cout <<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}