#include <bits/stdc++.h>
using namespace std;

void solve() {
    string main, sub; cin >> main >> sub; int iS, counter = 0; bool con=false;

    if (main.length() > sub.length()) {
        for (int i = 0; i < main.length(); i++) {
            iS = i; if (con) iS--;
            if (main[i] == sub[iS]){
                counter++;
            } else con = true;
        }
    }
    (counter == sub.length() ? cout << "Tentu saja bisa!" << endl : cout << "Wah, tidak bisa :(" << endl);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}