#include <bits/stdc++.h>
using namespace std;


int func(int a, int b, int k, int x){
    return abs(a*x+b);
}

int main(){
    int a, b, k, x, res=0;
    cin >> a >> b >> k >> x;

    for (int i = 0; i<k; i++){
        res = func(a, b, k, x);
        x = func(a, b, k, x);
    }

    cout << res << endl;

    return 0;
}