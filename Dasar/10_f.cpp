// #include <bits/stdc++.h>
// using namespace std;

// int N, D, table[2][1000], hasil, highest=-1, lowest= 2147483646;

// int rumus(int xj, int xi, int yj, int yi){
//     return pow(abs(xj-xi), D)+pow(abs(yj-yi), D);
// }

// int main() {
//     cin >> N >> D;

//     for (int i = 0; i < N; i++) {
//         cin >> table[0][i];
//         cin >> table[1][i];
//     }

//     for (int i = 0; i < N; i++) {
//         for (int j = i+1; j < N; j++){
//             hasil = rumus(table[0][j], table[0][i], table[1][j], table[1][i]);
//             if (hasil > highest) {
//                 highest = hasil;
//             }
//             if (hasil < lowest) {
//                 lowest = hasil;
//             }

//         }
//     }
//     cout << lowest << " " << highest;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
pii FK[1000];
int D;

int pangkat(int b, int p){
    int H=1;
    for (int i = 0; i<p; i++) H *= b;
    return H;
}


int cek(int idx1, int idx2) {
    return pangkat(abs(FK[idx1].first-FK[idx2].first), D) + pangkat(abs(FK[idx1].second - FK[idx2].second), D);
}

int main(){ 

    int N;
    cin >> N >> D;
    for (int i = 0; i < N; i++) cin >> FK[i].first >> FK[i].second;
    
    int min = 2000000, max = 0;
    
    for (int i = 0; i < N-1; i++){
        for (int j = i+1; j<N; j++){
            int H = cek(i,j);
            if (H > max) max = H;
            if (H < min) min = H;
        }
    }

    cout << min << " " << max;

    return 0;
}