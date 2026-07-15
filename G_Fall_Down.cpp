#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long

void magic(){
    int n , m;
    cin >> n >> m;

    char grid[n][m];

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> grid[i][j];
        }
    }

    for(int i = 0 ; i < m ; i++){
        int ground = n - 1; 

        for(int j = n - 1 ; j >= 0 ; j--){
            if(grid[j][i] == 'o'){
                ground = j - 1;
            }
            else if(grid[j][i] == '*'){
                swap(grid[j][i], grid[ground][i]);
                ground--;
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout << grid[i][j] ;
        }
        cout << nl;
    }
    cout << nl;
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