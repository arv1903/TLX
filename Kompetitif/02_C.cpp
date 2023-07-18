// #include <bits/stdc++.h>
// using namespace std;

// #define ar array
// #define v vector
// #define ll long long
// #define ld long double 
// #define sza(x) ((int)x.size()) // RETURNS ARRAY SIZE
// #define all(a) (a).begin(), (a).end() // FOR VECTOR

// v<int> num; 
// v<int> prime_list; 
// bool prime[100001];
// v<pair<int,int> > faktor;
// v<pair<int,int> > buang;
// v<int> pangkat;
// v<int> temp;

// void init(){
//     prime[1] = false;
//     for (int i = 2; i<=100001; i++) prime[i] = true;
//     int a = 2;
//     int batas = sqrt(100001);
//     while (a<=batas) {
//         if (prime[a]){
//             prime_list.push_back(a);
//             int b = a*a;
//             while (b<=100001){
//                 prime[b] = false;
//                 b += a;
//             }
//         }
//         a++;
//     }
//     for (int i = batas+1; i <= 100001; i++ )
//         if (prime[i]){
//             prime_list.push_back(i);
//         }
// }

// void cekBuang(pair<int,int> n) {
//     for (int i = 0; i < faktor.size(); i++){
//         if (faktor[i].first == n.first && faktor[i].second > n.second) {
//             pangkat.push_back(faktor[i].second);
//         }
//     }
//     int highest = 1;
//     if (pangkat.size() > 0) {
//         highest = *max_element(all(pangkat));
//     }
//     for (int i = 0; i < faktor.size(); i++) {
//         if (n.first == faktor[i].first && highest > faktor[i].second) {
//             buang.push_back(make_pair(faktor[i].first, faktor[i].second));
//         }
//     }
//     buang.erase( unique(buang.begin(),buang.end() ),buang.end() );
//     pangkat.clear();
// }

// void solve() {
//     double sum = 1;
//     for (auto i : num) {
//         int idx = 0;
//         while (i > 1){
//             int Bil = prime_list[idx], pangkat = 0;
//             while (i%Bil == 0 && i > 1) {
//                 pangkat++;
//                 i/=Bil;
//             }
//             if (pangkat > 0 && find(all(faktor), make_pair(Bil, pangkat)) == faktor.end()) {
                
//                 faktor.push_back({Bil, pangkat});
//             }
//             idx++;
//             if (idx >= prime_list.size()) break;
//         }

//         if (i > 1) faktor.push_back({i,1});
//     }

//     faktor.erase( unique(all(faktor)),faktor.end() );
    
//     for (int j = 0; j < faktor.size(); j++) {
//         sum*=pow((double)faktor[j].first, (double)faktor[j].second);
//         // if (temp != faktor[j].first) {
//         //     cekBuang(faktor[j]);
//         //     temp = faktor[j].first;
//         // }
//         int counter = 0; bool con = true;
//         for (int i = 0; i < temp.size(); i++) {
//             if (faktor[j].first == temp[i]) {
//                 con = false; cout << faktor[j].first << endl;
//             }
//         }
//         for (int i = 0; i < temp.size(); i++) {
//             if (faktor[j].first == temp[i]) counter++;
//         }
//         if (counter == 0) temp.push_back(faktor[j].first);
//          if (con) cekBuang(faktor[j]);
//     }
//     for (auto i : buang) cout << i.first << " " << i.second << endl;
//     for (auto i : faktor) cout << i.first << " " << i.second << "*" << endl;
//     for (auto i : buang) sum /= pow((double)i.first, (double)i.second);
//     cout << sum << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
//     int tc; cin >> tc;
//     init();
//     for (int t = 0; t < tc; t++) {
//         int temp; cin >> temp; num.push_back(temp);
//     }
//     solve();
// }

#include <bits/stdc++.h>
using namespace std;

int temp = 1;

int fpb(int x1, int x2) {
    if (x1 == 0) return x2;
    return fpb(x2%x1, x1);
}

int kpk(int x1, int x2) {
    return x1*x2/fpb(x1,x2);
}

void solve() {
    int r; cin >> r;
    temp = kpk(temp, r);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc; cin >> tc;
    for (int t = 0; t < tc; t++) {
        solve();
    } cout << temp << endl;
}