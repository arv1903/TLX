// #include <bits/stdc++.h>
// using namespace std;

// int prime(int x){
//     for (int i = 2; i*i < x; i++){
//         if (x%i ==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){

//     int N, temp=2, banyak = 0;
//     cin >> N;
//     bool bil_pertama = true;

//     while ( N > 1 ){
//         if (prime(temp)){
//             while (N%temp==0){
//                 banyak++;
//                 N/=temp;
//                 // cout << "banyak :"<< banyak << endl;
//             }

//             // cout << "banyak : " << temp << banyak << endl;
            
//             if (banyak > 0){
//                 if (not bil_pertama) {
//                     cout << " x ";
//                 }
//                 cout << temp;
//                 if (banyak > 1) cout << "^" << banyak;
//                 bil_pertama = false;
//             }
//             banyak = 0;
//         }
//         temp++;
//     }

//     cout << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define MAX_PRIME 1000

bool prime[MAX_PRIME+4]; // sampe MAX_PRIME + 4;
vector<int> prime_list;
void init(){
    prime[1] = false;
    for (int i = 2; i<=MAX_PRIME; i++) prime[i] = true;
    int a = 2;
    int batas = sqrt(MAX_PRIME);
    while (a<=batas) {
        if (prime[a]){
            prime_list.push_back(a);
            int b = a*a;
            while (b<=MAX_PRIME){
                prime[b] = false;
                b += a;
            }
        }
        a++;
    }
    for (int i = batas+1; i <= MAX_PRIME; i++ )
        if (prime[i]){
            prime_list.push_back(i);
        }
}

#define pii pair<int,int> // pasanga, bisa ditumpuk, misal pair <pair <string, string>, pair<int, int> > siswa misal nama depan, nama belakang, nilai sms1, nilai sms2
#define vpii vector<pii>
vpii faktor;

int main(){
    int A, idx = 0;
    init();
    cin >> A;
    while (A > 1){
        int Bil = prime_list[idx], Pangkat = 0;
        while (A%Bil == 0 && A > 1) {
            Pangkat++;
            A/=Bil;
        }
        if (Pangkat > 0) faktor.push_back({Bil, Pangkat});
        idx++;
        if (idx >= prime_list.size()) break;
    }

    if (A > 1) faktor.push_back({A,1});
    for (int i = 0; i < faktor.size(); i++){
        if (i > 0) cout << " x ";
        cout << faktor[i].first;
        if (faktor[i].second > 1) cout << "^" << faktor[i].second;
    }

    return 0;
}