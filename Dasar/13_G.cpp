#include <bits/stdc++.h>
using namespace std;
 
#define v          vector
#define int        long long
#define all(a)     (a).begin(), (a).end()
#define pb         push_back
#define mk         make_pair
#define pii        pair<int, int>
#define ff         first
#define ss         second
 
#define inp_v(vec) for (auto &i : vec) cin >> i;
#define prt_v(vec) for (auto  i : vec) cout << i << ' '; cout << endl;
#define lcm(a,b)   (a * (b / __gcd(a,b)))
#define dbg(x)     cerr << '(' << ' ' << #x << ' ' << '=' << ' ' << x << ' ' << ')' << endl;
 
const int MOD    = 1e9 + 7;
const int INF    = 1e9;
const int Dx[4]  = {1, 0, -1, 0};
const int Dy[4]  = {0, 1, 0, -1};
 
// NOTE : 0 (False), 1 (True) UB = first index which value is > target, LB = first index which value is >= target

// RESOLVE

int row, col, cnt, a, b, x, y; queue<pii> q;

bool in_grid(int x, int y) {return (x >= 0 && x < row) && (y >= 0 && y < col);}
 
void solve(){
    cin >> row >> col;
    v<v<int>> grid(row, v<int>(col)), vis(row, v<int>(col, 0));
    for(int i = 0; i < row; i++) for(int j = 0; j < col; j++) cin >> grid[i][j];

    cin >> a >> b; q.push({a,b});
    while(!q.empty()) {
        x = q.front().ff, y = q.front().ss;
        q.pop();
        if(in_grid(x, y) and grid[a][b] == grid[x][y] and !vis[x][y]) {
            vis[x][y] = 1; cnt++;
            for(int i = 0; i < 4; i++) q.push({x+Dx[i], y+Dy[i]});
        }
    }
    cout << cnt*(cnt-1) << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}