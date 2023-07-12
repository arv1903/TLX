#include <bits/stdc++.h>
using namespace std;
int N, M;
int matriks[105][105];

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = N-1; j >= 0; j--) {
            // printf("%d", matriks[N-i-1][M-j-1]);
            printf("%d", matriks[j][i]);
            if (j > 0) {
                cout << " ";
            } else {
                cout << endl;
            }
        } 
    }
}