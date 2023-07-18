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
#define gcd(a,b)   __gcd(a, b);
#define lcm(a,b)   (a*(b/gcd(a,b)))
 
const int MOD    = 1e9 + 7;
const int INF    = 1e9;
 
// NOTE : 0 (False), 1 (True) UB = first index which value is > target, LB = first index which value is >= target
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int V, E, A, B, x, y, z;
    cin >> V >> E >> A >> B;

    priority_queue<pii, v<pii>, greater<pii>> pq;
    v<int> dist(V+5); fill(all(dist), INF); 
    vector<bool> parent(V+5, false);
    map<int, v<pii> > adj;

    for(int i = 0; i < E; i++) {
        cin >> x >> y >> z;
        adj[x].pb(mk(y, z));
        adj[y].pb(mk(x, z));
    }

    // Dijkstra shortest path

    pq.push({0, A});
    dist[A] = 0;
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

    cout << dist[B] << endl;
    
    return 0;
}