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
    int k=1,j=n;

    for(int i=0;i<n;i++){
        if(i%2==0){
            v[n-i-1]=k++;
        }
        else{
            v[n-i-1]=j--;

        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<nl;
    
 
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