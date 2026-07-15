#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s;
        vector<int> v(n), b; // b starts empty
        for(int i=0;i<n;i++){
            cin>>v[i];
            s.insert(v[i]);
        }

        bool flag = false;
        if(s.size()==n){
            flag = true;
        }

        bool bad = false;
        if(flag){
            for(int i=1;i<n;i++){
                if(v[i] > v[i-1]){
                    cout << -1 << '\n';
                    bad = true;
                    break;
                }
            }
        }
        if(bad) continue;

        map<int,int> m;
        for(int i=0;i<n;i++){
            m[v[i]]++;
        }

        int ma = 0;
        for(auto &it: m){
            int freq  = it.second;
            for(int j=0;j<freq;j++){
                b.push_back(ma+1);
                //ma++;
            }
            ma++;
        }

        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
