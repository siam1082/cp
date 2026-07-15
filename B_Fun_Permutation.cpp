#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> v(n), a(n);
        for(int i = 0; i < n; i++){
            cin >> v[i]; 
        }

        for(int i = 0; i < n; i++){
            a[i] = n + 1 - v[i];
        }

        for(int i = 0; i < n; i++){
            cout << a[i] << " "; 
        }
        cout << "\n"; 
    }
    return 0;
}
