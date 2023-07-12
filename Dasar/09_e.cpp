#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, P , temp = 0;
    cin >> N >> M >> P;
    int matrix1[N][M], matrix2[M][P], hasil[N][P];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) 
            cin >> matrix1[i][j];

    for (int i = 0; i < M; i++) 
        for (int j = 0; j < P; j++)
            cin >> matrix2[i][j];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            temp=0;
            for (int k = 0; k < M; k++) {
                temp += matrix1[i][k]*matrix2[k][j];
            }
            hasil[i][j] = temp;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}