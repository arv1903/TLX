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
#define input_vec(vec) for (auto &i : vec) cin >> i;
#define print_vec(vec) for (auto i : vec) cout << i << endl;
#define clr(x) memset(x, 0, sizeof(x))
 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
// NOTE : 1 (TRUE), 2 (FALSE)   
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int n, k, w, h; cin >> n >> k; v<int> vec2; pii vec[k+5]; int dp[k+5][n+5];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= k; i++) {cin >> w >> h; vec[i] = mk(w,h);}
    for (int i = 1; i <= k; i++)
        for (int j = 0; j <= n; j++){
            dp[i][j] = dp[i-1][j];
            if (j >= vec[i].ff && dp[i-1][j-vec[i].ff] + vec[i].ss > dp[i][j]) {
                dp[i][j] = dp[i-1][j-vec[i].ff] + vec[i].ss;
            }
        }
    while(dp[k][n] == dp[k][n-1]) n--;
    for(int i = k; i >= 1; i--){
        if (dp[i][n] == dp[i-1][n]) continue;
        vec2.pb(i);
        n-=vec[i].ff;      
    }
    for(int i = vec2.size()-1; i >= 0; i--) cout << vec2[i] << endl;
    return 0;
}