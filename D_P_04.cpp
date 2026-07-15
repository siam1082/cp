#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
 string s;
 cin>>s;

int cnt1=0,cnt0=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        cnt1++;
    }
    else{
        cnt0++;
    
    }
}
if(cnt1==cnt0){
    if(s[0]=='0'){
        cout<<'1';
    for(int i=0;i<s.size()-1;i++){
        cout<<'0';
    }
}
else{
    cout<<'0';
    for(int i=0;i<s.size()-1;i++){
        cout<<'1';
    }
    return;

}


}
else{
if(cnt1>cnt0){
    for(int i=0;i<s.size();i++){
        cout<<'0';
    }
    return;
}
else{
    for(int i=0;i<s.size();i++){
        cout<<'1';
    }
    return;

}
}

 }

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

   
        magic();
    
    return 0;
}