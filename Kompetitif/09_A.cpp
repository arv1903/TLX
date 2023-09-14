/* Date : 2023, September 13 */ 

#include <bits/stdc++.h>
using namespace std;
 
#define int      long long
#define all(a)   (a).begin(), (a).end()
#define pb       push_back
#define pii      pair<int, int>
 
#define dbg(x)   cout << '(' << ' ' << #x << ' ' << '=' << ' ' << x << ' ' << ')' << endl;
 
const int MOD  = 1e9 + 7;
const int INF  = 1e9;
 
// UB = >, LB = >=
 
void Solve(){
    int n, m, A, x, y, ans = INF; cin >> n >> m;
    vector<vector<int>> g(n+5, vector<int>(m+5, 0)), dist(n+5, vector<int>(m+5, 0));
    for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) cin >> A, g[i][j] += (A == 0);
    cin >> x >> y; queue<pii> q; q.push({x, y}); dist[x][y] = 1;
    while(!q.empty()) {
        auto [a, b] = q.front();
        q.pop();
        if(a == n or b == m or a == 1 or b == 1) ans = min(ans, dist[a][b]);
        if(g[a-1][b] and a >= 1 and !dist[a-1][b]) dist[a-1][b] = dist[a][b] + 1, q.push({a-1, b});
        if(g[a+1][b] and a <= n and !dist[a+1][b]) dist[a+1][b] = dist[a][b] + 1, q.push({a+1, b});
        if(g[a][b-1] and b >= 1 and !dist[a][b-1]) dist[a][b-1] = dist[a][b] + 1, q.push({a, b-1});
        if(g[a][b+1] and b <= m and !dist[a][b+1]) dist[a][b+1] = dist[a][b] + 1, q.push({a, b+1});
    }
    cout << ans << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    Solve();
    return 0;
}