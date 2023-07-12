#include <bits/stdc++.h>
using namespace std;

int A, B, K, x, result = 0;

int rumus(int &A, int &B, int &x){
    return abs(A*x+B);
}

int main() {
    cin >> A >> B >> K >> x;
    
    for (int i = 0; i < K; i++){
        x = rumus(A, B, x);
        result = x;
    }

    cout << result << endl;

    return 0;
}