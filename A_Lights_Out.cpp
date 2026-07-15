





#include<iostream>
using namespace std;

int main() {
    int a[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    bool v[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            v[i][j] = 1;

  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] % 2 == 1) {
                v[i][j] = !v[i][j];
                if (j < 2) v[i][j + 1] = !v[i][j + 1];
                if (j > 0) v[i][j - 1] = !v[i][j - 1];
                if (i < 2) v[i + 1][j] = !v[i + 1][j];
                if (i > 0) v[i - 1][j] = !v[i - 1][j];
            }
        }
    }

  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << v[i][j];
        cout << endl;
    }

    return 0;
}