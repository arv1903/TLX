#include <bits/stdc++.h>
using namespace std;

int main() {

    int number;
    cin >> number;

    for ( int i = 1; i <= number; i++) {
        if ( i != 42 ) {
            if ( i % 10 != 0){
                cout << i << endl;
            }
        } else {
            cout << "ERROR" << endl;
            break;
        }
    }

    return 0;
}