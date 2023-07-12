#include <bits/stdc++.h>
using namespace std;

int main() {

    int counter, temp, high, low;
    cin >> counter;
    for ( int i=0; i<counter; i++) {
        cin >> temp;
        if ( i == 0 ){
            high = temp;
            low = temp;
        }
        if ( temp > high ){
            high = temp;
        } else if ( temp < low ) {
            low = temp;
        }
    }
    cout << high << " " << low << endl;


    // int n;
    // cin >> n;
    // int maxi= -1e9, mini=1e9;
    // for ( int i = 0; i<n; i++ ){
    //     int a;
    //     cin >> a;
    //     maxi = max(maxi, a);
    //     mini = min(mini, a);
    // }
    // cout << maxi << " " << mini << endl;

    return 0;
}