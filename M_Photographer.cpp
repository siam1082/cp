#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
   int a,b,c;
   cin>>a>>b>>c;
   int bi,sm;
  if(a>b && a>c){
    bi=a;
  }
  else if(b>a && b>c){
    bi=b;

  }
  else{
    bi=c;
  }

    if(a<b && a<c){
    sm=a;
  }
  else if(b<a && b<c){
    sm=b;

  }
  else{
    sm=c;
  }
  int ans=bi-sm;
     cout<<ans<<nl;
 
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

        magic();
    
    return 0;
}