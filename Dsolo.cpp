#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
void magic(){
    int n , m;
    cin >> n >> m ;
    char ch[n][m];

    for(int i =0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++) {
            cin >> ch[i][j] ;

        }
    }
    int x = 0 , cnt = 0;
    for(int i = 0 ; i < n ; i++){

        for(int j = 0 ;j < m ;j ++){
            if (ch[i][j] == '.'){
              x++;  
              if(x == 2 && ch[i][j+1] == '.' ){
                x = 0;
                cnt ++;
              } 
            }
            else{
                x = 0;
            }
            // if(x2 || ch[i][j] != '#'){
            //     x = 0;
            //     cnt ++;
            // }
            
        }
    }
    cout << cnt << nl;

 
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

        magic();
   
    return 0;
}