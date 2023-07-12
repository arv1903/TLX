#include <bits/stdc++.h>
using namespace std;

int main(){

    string S, T;
    cin >> S >> T;

    while (S.find(T) != string::npos){
        S.erase(S.find(T), T.length());
    }
    cout << S << endl;

    return 0;
}