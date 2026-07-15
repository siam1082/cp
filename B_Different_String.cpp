#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
#define yes cout << "Yes" << "\n"
#define no cout << "No" << "\n"
void magic(){
    string s;
    cin>>s;
    // string s1=s;
    // reverse(s1.begin(),s1.end());
    // if(s==s1)
    // {
    //     cout<<"NO"<<nl;
    //     return;
    // }
    // else{
    //     cout<<"YES"<<nl;
    //     for(int i=0;i<s1.size();i++){
    //         cout<<s1[i];
    //     }
    // }
    if(count(s.begin(),s.end(),s[0])==s.size()){
        cout<<"NO"<<nl;
    }
    else{
        rotate(s.begin(),s.begin()+1,s.end());
        cout<<"YES"<<nl;
        for(int i=0;i<s.size();i++){
            cout<<s[i];
        }
        cout<<nl;
    }
    // cout<<nl;
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