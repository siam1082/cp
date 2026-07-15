#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    int m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0,p=0;


    while(i<n&&j<m){
        if(abs(a[i]-b[j])<=1){
            p++;
            i++;
            j++;

        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<p<<endl;
    return 0;

}