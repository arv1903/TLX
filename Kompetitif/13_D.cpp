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
 
// NOTE : 0 (False), 1 (True) UB = first index which value is > target, LB = first index which value is >= target
 
void solve(){
    int N, y, x; cin >> N >> y; int dp[y+5]; fill(dp, dp+y+5, INF);
    dp[0] = 0;
    for(int i = 0; i < N; i++) {
        cin >> x;
        for(int j = y; j >= x; j--) {
            dp[j] = min(dp[j], dp[j-x] + 1);
        }
    }
    cout << (dp[y] <= INF ? dp[y] : -1) << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}