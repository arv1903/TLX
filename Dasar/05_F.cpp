#include <bits/stdc++.h>
using namespace std;

int main() {

    long double a;
    cin >> a;

    if (a > -1 && a < 0)cout << -1 << " " << 0 << endl;
    else cout << floor(a) << " " << ceil(a) << endl; 

    return 0;
}