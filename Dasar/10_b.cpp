#include <bits/stdc++.h>
using namespace std;

int N, Q, ar[2][1001];

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    cin >> N;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < N; j++) 
            cin >> ar[i][j];

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        char buff1[5], buff2[5];
        int x, y;
        cin >> buff1 >> x >> buff2 >> y;
        int p = buff1[0] - 'A';
        int q = buff2[0] - 'A';
        x--;
        y--;
        swap(ar[p][x], ar[q][y]);
    }

    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++ ) {
            cout << ar[i][j];
            if (j+1 < N){
                cout << " ";
            }
        }
        cout << endl;
    }
}