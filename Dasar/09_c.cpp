#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, temp=0, result=-1, arr[1001];
    cin >> N;

    for (int i = 0; i <= 1000; i++){
        arr[i] = 0; // agar harga awal setara, karena nilai awal nya acak
    }

    for (int i = 0; i < N; i++) {
        cin >> temp;
        arr[temp] += 1;
    }

    int temp2 = 0;
    for (int i = 0; i <= 1000; i++) {
        if (temp2 <= arr[i]) {
            temp2 = arr[i];
            result = i;
        }
    }

    // int N, A, maxMuncul=0, ValueModus=0, muncul[1004] = {0};
    // // for(int i=1; i<=1000; i++) muncul[i] = 0;
    // for (int i=0; i<N; i++){
    //     cin >> A;
    //     muncul[A]++;
    //     if (muncul[A] > maxMuncul){
    //         maxMuncul = muncul[A];
    //         ValueModus = A;
    //     } else if (muncul[A] == maxMuncul && A > ValueModus) ValueModus = A;
    // }


    cout << result << endl;

}