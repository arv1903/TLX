#include <bits/stdc++.h>
using namespace std; 

int main() {

    string S = {};
    cin >> S;

    if (S.find("_") != string::npos){
        while (S.find("_") != string::npos){
            if (S.find("_") != 0 ) {
                S[S.find("_")+1] = toupper(S[S.find("_")+1]);
            }
            S.erase(S.find("_"), 1);
        }
        cout << S << endl;
    }
    
    else {
        int i = 0;
        while (S[i]) {
            if (isupper(S[i])) {
                cout << "_";
                S[i]=tolower(S[i]);
            }
            putchar(S[i]);
            i++;
        }
        cout << endl;
    }

    return 0;
}