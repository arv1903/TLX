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
    int n, m, q, u, vv, w; cin >> n >> m >> q;
    map<int, v<pii> > adj;
    for(int i = 0; i < m; i++) {
        cin >> u >> vv >> w;
        adj[u].pb({vv, w});
        adj[vv].pb({u, w});
    }

    v<int> path(q); inp_v(path);

    int ans = 0;

    for(int i = 1; i < q; i++) {
        // dbg(i)
        int V = n, start = path[i-1], end = path[i];

        priority_queue<pii, v<pii>, greater<pii>> pq;
        v<int> dist(V+5); fill(all(dist), INF); 
        vector<bool> parent(V+5, false);
        
        pq.push({0, start});
        dist[start] = 0;
        while (!pq.empty()) {
            pii here = pq.top();
            pq.pop();
            int vv = here.ss;
            int d_v = here.ff;
            if (d_v != dist[vv]) continue;
            for (auto edge : adj[vv]) {
                if (dist[vv] + edge.ss < dist[edge.ff]) {
                    dist[edge.ff] = dist[vv] + edge.ss;
                    parent[edge.ff] = vv;
                    pq.push({dist[edge.ff], edge.ff});
                }
            }
        }
        ans += dist[end];
        // dbg(ans);
    }

    cout << ans << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}