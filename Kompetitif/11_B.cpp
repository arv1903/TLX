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

int V, E, a, b, c;
v<v<pii>> g;
vector<int> dist;

void bellman_ford(int s) {
    dist.assign(V, INT_MAX);
    dist[s] = 0;
    for (int i = 0; i < V - 1; i++) 
        for (int u = 0; u < V; u++) 
            for (auto j : g[u]) if (dist[u] + j.ss < dist[j.ff] and dist[u] != INT_MAX) dist[j.ff] = dist[u] + j.ss;
}

void cycle_detect() {
    for (int u = 0; u < V; u++) 
        for (auto j : g[u]) {
            if (dist[u] + j.ss < dist[j.ff] and dist[u] != INT_MAX) {
                cout << "Pak Dengklek tidak mau pulang" << endl; 
                return;
            }
        }
    if(dist[V-1] == INT_MAX) cout << "Tidak ada jalan" << endl;
    else cout << dist[V-1] << endl;
}
 
void solve(){
    cin >> V >> E;
    g.clear();
    g.resize(V);
    for(int i = 0; i < E; i++) {cin >> a >> b >> c; g[a].pb({b, c});}
    bellman_ford(0);
    cycle_detect();
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc; while(tc--) solve();
    return 0;
}