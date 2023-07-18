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
#define input_vec(vec) for (auto &i : vec) cin >> i;
#define print_vec(vec) for (auto i : vec) cout << i << endl;
#define clr(x) memset(x, 0, sizeof(x))
 
const int MAX_N = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ld EPS = 1e-9;
 
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int n, x, ans; cin >> n; v<int> N(n); input_vec(N); cin >> x; v<int> dp(x+5, 0);
    for(int i = 1; i <= x; i++) {
        ans = INF;
        for(int j = 0; j < n; j++){
            if (i >= N[j]) {
                ans = min(ans, dp[i-N[j]]+1);
            }
        }
        dp[i] = ans;
    }
    cout << dp[x] << endl;

    return 0;
}