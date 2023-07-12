#include <bits/stdc++.h>
using namespace std;

int main() {

    int N=0, arr[105];
    while (cin >> arr[N]) N++;
    for (int i = 1; i <= N; i++) cout << arr[N-i] << endl;

    // while (scanf("%d", &arr[N]) != EOF) {
    //     N++;
    // }

    // for (int i = 1; i <= N; i++){
    //     cout << arr[N-i] << endl;
    // }

    // int N=0; arr[100];
    // while (cin >> arr[N++]){
    //     for (int i = N-2; i >= 0; i--){
    //         cout << arr[i] << endl;
    //     }
    // }

    return 0;
}