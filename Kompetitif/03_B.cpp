#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end() // FOR VECTOR

void solve() {
    int N, M, K, x, y;; cin >> N >> M >> K; bool con = false;
    int papan[105][105], val[105][105];
    for (int i = 0; i < 105; i++) for(int j = 0; j < 105; j++) {papan[i][j] = 1; val[i][j] = 1;}
    for (int i = 1; i <= N; i++) for(int j = 1; j <= M; j++) cin >> papan[i][j];

    for (int i = 1; i <= M; i++) {
        for(int j = 1; j <= N; j++){
            val[j][i] *= papan[j][i-1] * papan[j][i+1] * papan[j+1][i] * papan[j-1][i];
            if (val[j][i] == K && !con) {
                x = j; y = i; con = true;
            }
        }
    }
    (con ? cout << x << " " << y << endl : cout << "0 0" << endl);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}