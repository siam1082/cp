#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    if(k == 0){
        cout << 0 << '\n';
        return 0;
    }
    vector<int> v(12);
    for(int i = 0; i < 12; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    
    int sum = 0, x = -1;
    for(int i = 0; i < 12; i++){
        sum += v[i];
        if(sum >= k){
            x = i + 1;  
            break;
        }
    }
    
    cout << x << '\n';
    return 0;
}
