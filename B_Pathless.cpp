#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n,s;
    cin>>n>>s;
    int sum=0;
    vector<int>a(n);
    unordered_map<int,int>m;

    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
        m[i]++;
    }
    if(s<sum){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<nl;
        return ;
        
    }
    if(s-sum!=1){
        cout<<-1<<nl;
        return ;
    }
    else{
        vector<int>order{ 0,2,1};
        for (int val : order) {
        for (int i = 0; i < m[val]; i++) {
            cout << val << " ";
        }
    }
    cout<<nl;

    }


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;

    while(t--){
        solve();
    }

}