// #include <bits/stdc++.h>
// using namespace std;

// int reverse(int x) {
//     int temp = x;
//     int ret  = 0;

//     while (temp > 0) {
//         ret  = (ret * 10) + (temp % 10);
//         temp = temp / 10;
//     }

//     return ret;
// }

// int main(){
//     int a, b;
//     cin >> a >> b;

//     cout << reverse(reverse(a) + (reverse(b))) << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int Balik(int A){
    int Hasil = 0;
    while (A > 0) {
        int D = A % 10;
        Hasil = Hasil * 10 + D;
        A = A/10;
    }
    return Hasil;
}

int main(){

    int A,B;
    cin >> A >> B;
    int A1 = Balik(A), B1 = Balik(B);
    cout << Balik(A1 + B1) << endl;

    return 0;
}