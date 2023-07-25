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
    int n, m, k, x, y, grid[105][105], val[105][105]; cin >> n >> m >> k;
    for(int i = 0; i < 105; i++) for(int j = 0; j < 105; j++) grid[i][j] = 1, val[i][j] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            val[j][i] *= grid[j][i-1] * grid[j][i+1] * grid[j+1][i] * grid[j-1][i];
            if(val[j][i] == k) {cout << j << " " << i << endl;return;}
        }
    }
    cout << "0 0" << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}