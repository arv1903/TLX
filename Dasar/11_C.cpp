#include <bits/stdc++.h>
using namespace std;

char buff[111];
int N;

int main() {
    cin >> buff >> N;
    int len = strlen(buff);
    for (int i = 0; i < len; i++) {
        int ord = (buff[i] - 'a');
        int encrypted = (ord + N) % 26;
        buff[i] = encrypted + 'a';
    }
    cout << buff << endl;
}