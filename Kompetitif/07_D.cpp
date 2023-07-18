#include <bits/stdc++.h>
using namespace std;
 
#define v          vector
#define ll         long long
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

int dp[55][55];
string s;

int DP(int iStart, int iEnd) {
    if (iStart == iEnd) return 1;
    if (iStart >  iEnd) return 0;
    if (dp[iStart][iEnd] != -1) return dp[iStart][iEnd];
    if (s[iStart] == s[iEnd]) {
        dp[iStart][iEnd] = DP(iStart+1, iEnd-1) + 2; // Ujung kanan + kiri + rekursi di tengah
        return dp[iStart][iEnd];
    }
    dp[iStart][iEnd] = max(DP(iStart+1, iEnd), DP(iStart, iEnd-1));
    return dp[iStart][iEnd];
}
 
void solve(){
    cin >> s;
    if (s.size() == 1) {cout << 1 << endl; return;}
    memset(dp, -1, sizeof(dp));
    DP(0, s.size()-1);
    cout << dp[0][s.size()-1] << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    for (int t = 0; t < tc; t++) {
        solve();
    }
    return 0;
}