#include <bits/stdc++.h>
using namespace std;
 
// MY PERSONAL TEMPLATE
 
#define ar array
#define v vector
#define int long long
#define ld long double 
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define ff first
#define ss second
#define inp_v(vec) for (auto &i : vec) cin >> i;
#define prt_v(vec) for (auto i : vec) cout << i << endl;
#define clr(x) memset(x, 0, sizeof(x))
 
const int MAX_N = LLONG_MAX;
const int MOD   = 1e9 + 7;
const int INF   = 1e9;
const ld  EPS   = 1e-9;
const ld  PI    = 3.1415926535897932384626433832795;
 
int gcd(int a,int b) { if (b==0) return a; return gcd(b, a%b); }
int lcm(int a,int b) { return a/gcd(a,b)*b; }
bool prime(int a)  { if (a==1) return 0; for (int i=2;i*i<=a;i++) if (a%i==0) return 0; return 1; }
 
// NOTE : 0 (False), 1 (True)

int ans, m, n, cnt= 0, val, grid[30][30], save[30][30]; 

void load() {
    for(int i = 0; i < m; i++) 
        for(int j = 0; j < n; j++) grid[i][j] = save[i][j];
}

void ganti(int x, int y, int c) {
    if ((x >= 0 && x < m) && (y >= 0 && y < n)){
        if (grid[x][y] == c){
            grid[x][y] = 0;
            cnt++;
            ganti(x+1,y,c);
            ganti(x-1,y,c);
            ganti(x,y+1,c);
            ganti(x,y-1,c);
        }
    }
}

void drop() {
    for (int i = n-1; i >= 0; i--){
        for (int j = 0; j < n; j++) {
            if (grid[i][j] != 0 && grid[i+1][j] == 0){
                swap(grid[i][j], grid[i+1][j]);
                i+=2;
            }
        }
    }
}

int second_step() {
    int res = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if (grid[i][j]){
                cnt = 0;
                ganti(i, j, grid[i][j]);
                res = max(res, cnt);
            }
        }
    }
    return res*(res-1);
}

int solve(){
    ans = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            load();
            ganti(i, j, grid[i][j]);
            val = cnt*(cnt-1);
            drop();
            if(cnt <= 1) {cnt = 0; val = 0;continue;}
            val += second_step();
            ans = max(val, ans);
            cnt = 0; val = 0;
        }
    }
    return ans;
}
  
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> m >> n; memset(grid, -1, sizeof(grid)); memset(save, -1, sizeof(save));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
            save[i][j] = grid[i][j];
        }
    }
    cout << solve() << endl;
    
    return 0;
}