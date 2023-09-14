/* Date : 2023, August 31 */ 

// UNFINISHED

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

const int Dx[4]  = {1, 0, -1, 0};
const int Dy[4]  = {0, 1, 0, -1};
 
// UB = >, LB = >=

int n, m; 

bool in_grid(int x, int y) {return (x >= 0 && x < n) && (y >= 0 && y < m);}

void solve(){
    cin >> n >> m; vector<vector<int>> g(n, vector<int>(m));
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> g[i][j];

    auto slv = [&] (vector<vector<int>> v) {
        vector<vector<int>> tmp = v;
        bool vis[n][m]; memset(vis, 0, sizeof vis);
        int ans = 0, cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                queue<pii> q;
                cnt = 0;
                q.push({i,j});
                while(!q.empty()) {
                    int x = q.front().ff, y = q.front().ss;
                    q.pop();
                    if(in_grid(x, y) and tmp[i][j] == tmp[x][y] and !vis[x][y]) {
                        vis[x][y] = 1; cnt++;
                        for(int i = 0; i < 4; i++) q.push({x+Dx[i], y+Dy[i]});
                    }
                }
                ans = max(ans, cnt*(cnt-1));
            }
        }
        return ans;
    };
    cout << slv(g) << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}