#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
   int n,x,y;           cin>>n>>x>>y;
        //mj br
   string s=to_string(n);
   string t=to_string(n);
 
   x--; y--;
   while(x--)  next_permutation(s.begin(),s.end());
   while(y--)  next_permutation(t.begin(),t.end());
 
   int sz=s.size(),a=0,b=0;
   vector<int> c1(10),c2(10);
   for(int i=0;i<sz;i++){
      if(s[i]==t[i]){
         a++;
      }else{
         c1[s[i]-'0']++;
         c2[t[i]-'0']++;
      }
   }
 
   for(int i=0;i<10;i++){
      if(c1[i] && c2[i]){
         b++;
      }
   }
   
    cout << a << "A" << b << "B" << nl;
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