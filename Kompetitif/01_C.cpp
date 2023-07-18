#include <bits/stdc++.h>
using namespace std;

void solve(string front, string back) {
    string input; cin >> input; bool con = false;
    if (input.length() >= back.length()+front.length()){
        if (front.length() != 0 || back.length() != 0) {
            if (front == input.substr(0, front.length()) && back == input.substr(input.length()-back.length(), input.length())) cout << input << endl;
        }
        else {
            cout << input << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string wildcard, front = "", back = ""; int index; cin >> wildcard;
    for (int i = 0; i < wildcard.length(); i++){
        if (wildcard[i] == '*') index = i;
    } for (int i = 0; i < index; i++){
        front += wildcard[i];
    } for (int i = index+1; i < wildcard.length(); i++){
        back += wildcard[i];
    }

    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve(front, back);
    }
}