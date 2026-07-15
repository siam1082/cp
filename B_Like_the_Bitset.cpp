#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
void solve(){
    int n;
    int k;
    cin>>n>>k;
    string c; cin >> c;
    vector<int>a,b;
    for(int i=0;i<n;i++){
        if(c[i]=='1'){
            a.push_back(i);
        }
        else{
            b.push_back(i);
        }

    }
    int count =0;
    for(int i=0;i<n;i++){
        if(c[i]=='1'){
            count ++;
            if(count>=k){
                cout<<"NO"<<nl;
                return ;
            }

        }
        else count = 0;
    }
    vector<int>v(n);
    int s=1;
    for(int i=0;i<a.size();i++){
        v[a[i]]=s;
        s++;



    }
    s=n;
    for(int i=0;i<b.size();i++){
        v[b[i]]=s;
        s--;
    }
    cout<<"YES"<<nl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout << endl;

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