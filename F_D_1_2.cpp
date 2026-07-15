#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
    cin>>v[i];   
        
    }
    for(int i=0;i<n;i++){
        if (v[i] == 0) continue;
        for(int j=i+1;j<n;j++){
          
           int x=v[j]%v[i];
           if(x%2==0){
            cout<<v[i]<<" "<<v[j]<<nl;
            return;
           }
        }
    }

    
cout<<-1<<nl;
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