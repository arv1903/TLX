#include <bits/stdc++.h>
using namespace std;

#define ar array
#define v vector
#define ll long long
#define ld long double 
#define sza(x) ((int)x.size()) // RETURNS ARRAY SIZE
#define all(a) (a).begin(), (a).end() // FOR VECTOR
#define allA(a, batas) (a), (a)+batas  // FOR ARRAY

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

struct PESERTA {
    string ID;
    int score[3];
};

bool rule(PESERTA P1, PESERTA P2) {
    if (P1.score[2] == P2.score[2]) return P1.score[2] < P2.score[2];
    if (P1.score[1] == P2.score[1]) return P1.score[1] < P2.score[1];
    return P1.score[0] < P2.score[0];
    
}

void solve() {
    PESERTA psrt[81];
    int N, M; bool flag = false; string ID; cin >> N >> M >> ID;;
    for (int i = 0; i < N; i++){
        cin >> psrt[i].ID >> psrt[i].score[0] >> psrt[i].score[1] >> psrt[i].score[2];
    }

    sort(allA(psrt, N), rule);

    for (int i = 0; i < M; i++) {
        if (psrt[i].ID == ID) {flag = true; break;}
    }

    (flag ? cout << "YA" << endl : cout << "TIDAK" << endl);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc; cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}