/* Date : 2023, September 12 */ 

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
    int n, m, k; cin >> n >> m >> k;
    vector<vector<int>> g(n+2, vector<int>(m+2, 1));
    for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) cin >> g[i][j];
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++) 
            if(g[j-1][i] * g[j+1][i] * g[j][i-1] * g[j][i+1] == k) {
                cout << j << " " << i << '\n';
                return; 
            }
    cout << "0 0\n";
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    Solve();
    return 0;
}