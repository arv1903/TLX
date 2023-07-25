// #include <bits/stdc++.h>
// using namespace std;

// #define all(a) (a).begin(), (a).end() // FOR VECTOR

// void solve() {
//     int N, M, K, x, y;; cin >> N >> M >> K; bool con = false;
//     int papan[105][105], val[105][105];
//     for (int i = 0; i < 105; i++) for(int j = 0; j < 105; j++) {papan[i][j] = 1; val[i][j] = 1;}
//     for (int i = 1; i <= N; i++) for(int j = 1; j <= M; j++) cin >> papan[i][j];

//     for (int i = 1; i <= M; i++) {
//         for(int j = 1; j <= N; j++){
//             val[j][i] *= papan[j][i-1] * papan[j][i+1] * papan[j+1][i] * papan[j-1][i];
//             if (val[j][i] == K && !con) {
//                 x = j; y = i; con = true;
//             }
//         }
//     }
//     (con ? cout << x << " " << y << endl : cout << "0 0" << endl);
// }

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);
    
//     solve();
// }

#include <bits/stdc++.h>
using namespace std;
 
#define int      long long
#define all(a)   (a).begin(), (a).end()
#define pb       push_back
#define pii      pair<int, int>
#define ff       first
#define ss       second
 
#define lcm(a,b) (a * (b / __gcd(a,b)))
#define dbg(x)   cout << '(' << ' ' << #x << ' ' << '=' << ' ' << x << ' ' << ')' << endl;
 
const int MOD  = 1e9 + 7;
const int INF  = 1e9;
 
// UB = >, LB = >=
 
void solve(){
    int n, m, k, x, y, grid[105][105]; cin >> n >> m >> k;
    memset(grid, 1, sizeof grid);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(grid[j][i-1] * grid[j][i+1] * grid[j-1][i] * grid[j+1][i] == k) {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
    cout << "0 0" << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}