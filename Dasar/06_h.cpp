#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= a; i++){
        if ( i%b == 0 ) {
            cout << "*" << " ";
        } else {
            cout << i << " ";
        }
    }

    return 0;
}