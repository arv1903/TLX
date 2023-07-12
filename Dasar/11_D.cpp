#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    if (s1.find(s2) != string::npos){
        s1.erase(s1.find(s2), s2.length());
    }

    if (s1.find(s3) != string::npos){
        s1.insert(s1.find(s3)+s3.length(), s4);
    }

    cout << s1 << endl;

    return 0;
}