#include <bits/stdc++.h>
using namespace std;

int main() {

    int a;
    cin >> a;
    
    if ( a <= 0 ) {
        return 0;
    }

    while ( a % 2 == 0 ){
        a /= 2;
    } if ( a == 1) {
        cout << "ya" << endl;
    } else {
        cout << "bukan" << endl;
    } 

    return 0;
}