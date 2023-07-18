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

const int Dx[4] = {1, 0, -1, 0};
const int Dy[4] = {0, 1, 0, -1};
 
// NOTE : 0 (False), 1 (True) UB = first index which value is > target, LB = first index which value is >= target
int n, m; 

bool in_grid(int x, int y) {return (x >= 1 and x <= n and y >= 1 and y <= m);}
 
void solve(){
    cin >> n >> m; 

    int grid[n+1][m+1]; bool vis[n+1][m+1]; memset(vis, 0, sizeof vis);

    for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) cin >> grid[i][j];
    int Ra, Ca, Rb, Cb; cin >> Ra >> Ca >> Rb >> Cb;

    priority_queue<pair<int, pii>, v<pair<int, pii>>, greater<pair<int, pii>>> pq;
    pq.push({0, {Ra, Ca}});
    vis[Ra][Ca] = true;


    while(!pq.empty()){
        int val = pq.top().ff, x = pq.top().ss.ff, y = pq.top().ss.ss;
        // dbg(val) dbg(x) dbg(y)
        pq.pop();

        if(x == Rb and y == Cb) {
            cout << val << endl;
            return;
        }
        else {
            for(int i = 0; i < 4; i++) {
                x += Dx[i], y += Dy[i];
                if(in_grid(x, y) and grid[x][y] != -1 and !vis[x][y]) {
                    pq.push({max(val, grid[x][y]), {x, y}});
                    vis[x][y] = true;
                }
                x -= Dx[i], y -= Dy[i];
            }
        }
    }
    
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}