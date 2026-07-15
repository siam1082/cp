#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
if(t%2==0){
    int c=t/2;
    cout<<c<<"\n";
    for(int i=0;i<c;i++){
        cout<<"2"<<" ";
    }
    }
    else{
    int k=t/2;
    cout<<k<<"\n";
    for(int i=0;i<k-1;i++){
        cout<<"2"<<" ";
    }
        cout<<"3";
    
 }
 return 0;
 }