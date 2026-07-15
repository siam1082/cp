#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define int long long
using pii = pair<int, int>;
void magic(){

        int n;
        cin >> n;
        vector<int> a;
        int k = 1, c = 0;
        int tmp = n;
        while (tmp > 0) {
            int d = tmp % 10;
            if (d != 0) {
                a.push_back(d * k);
                c++;
            }
            tmp /= 10;
            k *= 10;
        }
        cout << c << endl;
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;

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