#include <bits/stdc++.h>
using namespace std;

string s[16384];
int mat[128][128];

void create(int n, int r, int c, int pow) {
    for (int i = 0; i < n; i++) {
        int R = 0, C = 0, x = pow;
        for (int j = 1; j < s[i].length(); j++) {
            x /= 2;
            if (s[i][j] == '1') C += x;
            if (s[i][j] == '2') R += x;
            if (s[i][j] == '3'){
                C += x;
                R += x;
            }
        }
        for (int j = R; j < R + x; j++) {
            for (int k = C; k < C + x; k++) {
                mat[j][k] = 1;
            }
        }
    }
}

int main() {

    int n, r, c, pow=1 ; cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    cin >> r >> c;
    while (pow < max(r, c)) pow *= 2;
    create(n, r, c, pow);

     for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}