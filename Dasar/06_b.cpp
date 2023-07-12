#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, temp, res=0;
    cin >> a;

    for (int i = 0; i < a; i++) {
        cin >> temp;
        res += temp;
    }
    cout << res << endl;

    return 0;
}