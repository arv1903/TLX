#include <bits/stdc++.h>
using namespace std;
 
#define v          vector
#define int        long long
#define ld         long double 
#define all(a)     (a).begin(), (a).end()
#define pb         push_back
#define mk         make_pair
#define pii        pair<int, int>
#define ff         first
#define ss         second
#define inp_v(vec) for (auto &i : vec) cin >> i;
#define prt_v(vec) for (auto i : vec) cout << i << endl;
#define clr(x)     memset(x, 0, sizeof(x))
#define gcd(a,b)   __gcd(a, b);
#define lcm(a,b)   (a*(b/gcd(a,b)))
#define ping(x)    cerr << x << "*" << endl;
#define lb         lower_bound
#define ub         upper_bound
 
const int MAX_N  = 1e5+5;
const int MOD    = 1e9 + 7;
const int INF    = 1e9;
const ld  EPS    = 1e-9;
const ld  PI     = 3.1415926535897932384626433832795;
 
bool prime(int a)  { if (a==1) return 0; for (int i=2;i*i<=a;i++) if (a%i==0) return 0; return 1; }
 
// NOTE : 0 (False), 1 (True)

int vv, h, n, dp[501][501], grid[501][501] = {0}, ans = 0;

struct pos {
    int v1, h1, v2, h2;
};

int DP(int hh, int b) {
    if (hh >= vv or b > h or b < 1) return 0;
    if (dp[hh][b] != -1) return dp[hh][b];
    if (grid[hh+1][b] == 1) { 
        int Llength = 0, Rlength = 0, temp1 = b, temp2 = b;
        while(grid[hh+1][temp1--] == 1) Llength++; // CEK PANJANG BRICK KE KIRI
        while(grid[hh+1][temp2++] == 1) Rlength++; // CEK PANJANG BRICK KE KANAN

        // cout << hh << " " << b-Llength << " * " << hh << " " <<  b+Rlength << endl;

        return dp[hh][b] = DP(hh+1, b-Llength) + DP(hh+1, b+Rlength) + 1;
    } 
    return dp[hh][b] = DP(hh+1, b);
}
 
void solve(){
    cin >> vv >> h >> n; v<pos> bricks(n);
    for(auto &i : bricks) cin >> i.v1 >> i.h1 >> i.v2 >> i.h2;
    for(auto i : bricks) {
        for(int j = i.v1; j <= i.v2; j++){
            for(int k = i.h1; k <= i.h2; k++){
                grid[j][k] = 1;
            }
        }
    }

    // for(int i = 1; i <= vv; i++) {
    //     for (int j = 1; j <= h; j++) {
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    memset(dp, -1, sizeof(dp));
    for(int i = 1; i <= h; i++) {
        // cout << DP(0,i) << endl;
        ans = max(ans, DP(0,i));
    }
    cout << ans << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}