#include <bits/stdc++.h>
using namespace std;
 
// MY PERSONAL TEMPLATE
 
#define ar array
#define v vector
#define ll long long
#define ld long double 
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define ff first
#define ss second
#define inp_v(vec) for (auto &i : vec) cin >> i;
#define prt_v(vec) for (auto i : vec)  cout << i << endl;
#define clr(x) memset(x, 0, sizeof(x))
 
const int MAX_N = 1e5 + 5;
const ll  MOD   = 1e9 + 7;
const ll  INF   = 1e9;
const ld  EPS   = 1e-9;
const ld  PI    = 3.1415926535897932384626433832795;

ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
bool prime(ll a)  { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }

// NOTE : 0 (TRUE), 1 (FALSE)
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int row, col, x, y, ans = MAX_N; cin >> row >> col; int maze[105][105], val[105][105]; queue<pii> q;
    memset(val, -1, sizeof(val));
    for (int i = 1; i <= row; i++) for (int j = 1; j <= col; j++) cin >> maze[i][j];
    cin >> x >> y; q.push(mk(x,y)); val[x][y] = 1;

    while(not q.empty()) {
        if (q.front().second == col or q.front().first == row or q.front().first == 1 or q.front().second == 1) ans = min(ans, val[q.front().first][q.front().second]);
        if (maze[q.front().first-1][q.front().second] == 0 and q.front().first-1 > 0 and val[q.front().first-1][q.front().second] == -1) {
            val[q.front().first-1][q.front().second] = val[q.front().first][q.front().second] + 1;
            q.push(mk(q.front().first-1, q.front().second));
        } 
        if (maze[q.front().first+1][q.front().second] == 0 and q.front().first+1 <= row and val[q.front().first+1][q.front().second] == -1) {
            val[q.front().first+1][q.front().second] = val[q.front().first][q.front().second] + 1;
            q.push(mk(q.front().first+1, q.front().second));
        } 
        if (maze[q.front().first][q.front().second-1] == 0 and q.front().second-1 > 0 and val[q.front().first][q.front().second-1] == -1) {
            val[q.front().first][q.front().second-1] = val[q.front().first][q.front().second] + 1;
            q.push(mk(q.front().first, q.front().second-1));
        } 
        if (maze[q.front().first][q.front().second+1] == 0 and q.front().second+1 <= col and val[q.front().first][q.front().second+1] == -1) {
            val[q.front().first][q.front().second+1] = val[q.front().first][q.front().second] + 1;
            q.push(mk(q.front().first, q.front().second+1));
        } 
        q.pop();
    }

    cout << ans << endl;

    return 0;
}