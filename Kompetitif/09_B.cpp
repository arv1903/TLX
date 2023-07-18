#include <bits/stdc++.h>
using namespace std;
 
#define int      long long
#define all(a)   (a).begin(), (a).end()
#define pb       push_back
#define pii      pair<int, int>
#define ff       first
#define ss       second
 
#define lcm(a,b) (a * (b / __gcd(a,b)))
#define dbg(x)   cout << '(' << ' ' << #x << ' ' << '=' << ' ' << x << ' ' << ')' << endl;
 
const int MOD  = 1e9 + 7;
const int INF  = 1e9;
const int N1   = 50010;
const int N2   = 200010;
 
// UB = >, LB = >=
 
void solve(){
    int n, e, q, r, ans = 0, a, b; cin >> n >> e >> q >> r;
    vector<pii> edge(N2); vector<bool> vis(N1, 0), spc(N1, 0), T(N2, 0); map<int, vector<int>> mp; queue<int> Q;
    for(int i = 1; i <= e; i++) cin >> edge[i].ff >> edge[i].ss, T[i] = 0;
    for(int i = 1; i <= q; i++) cin >> a, spc[a] = 1;
    for(int i = 1; i <= r; i++) cin >> a, T[a] = 1;

    for(int i = 1; i <= e; i++) {
        if(!T[i]) {
            a = edge[i].ff, b = edge[i].ss;
            mp[a].pb(b);
            mp[b].pb(a);
        }
    }
    ans += q*(q-1)/2;
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            int cnt = 0;    
            Q.push(i); vis[i] = true;
            while(!Q.empty()) {
                int now = Q.front();
                Q.pop();
                if(spc[now]) cnt++;
                for(auto j : mp[now]) {
                    if(vis[j]) continue;
                    Q.push(j); vis[j] = true;
                }
            }
            ans -= cnt*(cnt-1)/2;
        }
    }
    cout << ans << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int tc; cin >> tc; while(tc--) solve();
    return 0;
}