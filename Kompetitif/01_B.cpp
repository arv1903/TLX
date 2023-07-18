#include <bits/stdc++.h>
using namespace std;

#define ar array
#define v vector
#define ll long long
#define ld long double 
#define sza(x) ((int)x.size()) // RETURNS ARRAY SIZE
#define all(a) (a).begin(), (a).end() // FOR VECTOR

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int r, c, temp = 0, lowest = 0; string board[21], penuh = "", kosong = ""; bool special = false;
v<pair<int, int> > vec; 

bool cek(int i, int j) {
    for (int k = 0; k < vec.size(); k++) 
        if (i+1 == vec[k].first && j == vec[k].second) {
            return false; break;
        }
    return true;
}

void turun(int lowest) {

    for (int i = r-1; i >= 0; i--){
        if (board[i] != penuh && board[i] != kosong) {
            for (int j = 0; j < c; j++) {
                if (board[i][j] == '1' && board[i+1][j] == '0' && cek(i,j)){
                    board[i][j] = '0';
                    board[i+1][j] = '1';
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> r >> c;
    for (int i = 0; i < r; i++) cin >> board[i];
    for (int i = 0; i < c; i++) {
        penuh += '1'; kosong += '0';
    }

    if (r == 1) {
        if (board[0] == penuh){
            cout << kosong << endl;
        } else {
            cout << board[0] << endl;
        }
    } else {
        if (board[r-1] == penuh) {
            board[r-1] = kosong; 
            turun(lowest);
            special = true;
        }

        bool first = true;
        for(int i = r-1; i >= 0; i--) {
            if (board[i] == penuh) {
                if (first) {
                    if (!special) lowest = i; 
                    else lowest = r-1;
                    
                    first = false;
                }
            }
        }

        


        for (int i = 0; i < r; i++) if (board[i] == penuh) board[i] = kosong;

        for (int i = lowest; i < r; i++)
            for (int j = 0; j < c; j++)
                if (board[i][j] == '0' && i > lowest && board[i-1][j] == '1'){
                    vec.push_back(make_pair(i,j));
                }

        int t=100;
        while (t--) {
            for (int i = 0; i < r; i++) if (board[i] == penuh) {
                board[i] = kosong;
                lowest = i+1;
                for (int i = 0; i < vec.size(); i++) {
                    if (vec[i].first == lowest){
                        vec.erase(remove(all(vec), vec[i]), vec.end());
                        i--;
                    }
                } 
                turun(lowest);
            }
            turun(lowest);
        }


        if (board[r-1] == penuh) {
            board[r-1] = kosong; turun(lowest);
        }

        for (int i = 0; i < r; i++) {
            cout << board[i] << endl;
        }
    }

    return 0;
}