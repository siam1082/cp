#include<bits/stdc++.h>
using namespace std;
bool f(int a){
    if(a<4)return false;

    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return true;


        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=n+a;
    bool ok1=f(a);
    bool ok2=f(b);
     while (!ok1 || !ok2){
          
        a++;
        b++;
            ok1=f(a);
     ok2=f(b);
    
     }
        cout<<b<<" "<<a<<"\n";
    
    


    return 0;
}