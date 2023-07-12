#include <bits/stdc++.h>
using namespace std; 

int main() {
    string S = {};
    cin >> S;
    char c;
    int i = 0;
    while (S[i]) {
        c=S[i];
        if (isupper(c)) c=tolower(c);
        else if(islower(c)) c=toupper(c);
        putchar(c);
        i++;
    }
    cout << endl;

    return 0;
}