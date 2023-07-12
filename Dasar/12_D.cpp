#include <bits/stdc++.h>
using namespace std;

bool palindrom(string S){
    if (S.length() == 1){
        return 1;
    } else if (S.length() == 2){
        if (S[0] == S[1]){
            return 1;
        } else return 0;
    }
    bool palindrom1 = S[0] == S[S.length() - 1];
    S.erase(S.length() - 1, 1);
    S.erase(0,1);
    return palindrom1 && palindrom(S);
}

int main(){
    string S;
    cin >> S;
    
    if (palindrom(S) == true) cout << "YA" << endl;
    else cout << "BUKAN" << endl;

    return 0;
}