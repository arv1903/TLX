#include <bits/stdc++.h>
using namespace std;

int main() {

    int a;
    cin >> a;

    if ( a > 0 && a < 10) {
        cout << "satuan" << endl;
    };

    if ( a > 9 && a < 100) {
        cout << "puluhan" << endl;
    };

    if ( a > 99 && a < 1000) {
        cout << "ratusan" << endl;
    };

    if ( a > 999 && a < 10000) {
        cout << "ribuan" << endl;
    };

    if ( a > 9999 && a < 100000) {
        cout << "puluhribuan" << endl;
    };

    return 0;
}