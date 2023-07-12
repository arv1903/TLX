#include <bits/stdc++.h>
using namespace std;

// int res = 1, temp;
// int fac(int x){
//     for (int i = 1; i <= x; i++){
//         temp = i;
//         if (i%2==0){
//             temp = i/2;
//         }
//         res*=temp;
//     }
//     return res;
// }

// int main(){
//     int x;
//     cin >> x;
//     cout << fac(x) << endl;

//     return 0;
// }

int fac(int N){
    if ( N <= 1 ) return 1;
    else if ( N % 2 == 0 ) return N/2 * fac(N-1);
    else return N*fac(N-1);
}

int main(){
    	
    int N;
    cin >> N;
    cout << fac(N) << endl;

    return 0;
}