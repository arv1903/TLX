#include <bits/stdc++.h>
using namespace std;

int N, K;
int catat[1000];

void tulis(int kedalaman){
    if (kedalaman >= K){
        for (int i=1; i<=K; i++){
            if (i != 1){
                cout << " ";
            }
            cout << catat[i-1];
        }
        cout << endl;
    } else {
        for (int i=catat[kedalaman-1]+1; i <= N; i++){
            catat[kedalaman] = i;
            tulis(kedalaman+1);
        }
    }
}

int main(){
    cin >> N >> K;
    tulis(0);
    return 0;
}