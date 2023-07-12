#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, temp=0;
    cin >> n;

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 0; j < i; j++ ) {
            cout << temp;
            temp++;
            if ( temp > 9 ) {
                temp = 0;
            }
            
        }
        cout << endl;
    }

    return 0;
}