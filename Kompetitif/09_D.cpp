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
#define lb         lower_bound
#define ub         upper_bound
 
#define inp_v(vec) for (auto &i : vec) cin >> i;
#define prt_v(vec) for (auto i : vec) cout << i << endl;
#define gcd(a,b)   __gcd(a, b);
#define lcm(a,b)   (a*(b/gcd(a,b)))
 
const int MOD    = 1e9 + 7;
const int INF    = 1e9;
const ld  EPS    = 1e-9;
const ld  PI     = 3.1415926535897932384626433832795;
 
template<class T> T prime(T a) {
    if (a==1) return 0; 
 
    for (int i=2; i*i <= a; i++) 
        if (a%i==0) return 0; 
 
    return 1; 
}
 
// NOTE : 0 (False), 1 (True)

map<int, v<int> > mp; int n, l, t, st, nd, a, b, path[501]; queue<int> q;

int BFS(int st, int nd) {       
    q.push(st);
    memset(path, -1, sizeof path);
    path[st] = 0;
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        for(auto i : mp[cur]) {
            if(path[i] == -1) {
                path[i] = path[cur] + 1;
                q.push(i);
            }
        }
    }
    return path[nd];
}
 
void solve(){
    cin >> n >> l >> t >> st >> nd;
    int cnt = 0;
    for(int i = 0; i < l; i++) {
        cin >> a >> b;
        mp[a].pb(b);mp[b].pb(a);
    }

    int ans = INF;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        mp[a].pb(b); mp[b].pb(a);
        if(BFS(st, nd) != -1) {
            ans = min(ans, BFS(st, nd));
        }
        mp[a].pop_back(); mp[b].pop_back();
    }

    cout << ans << endl;

    // for(auto i : mp) {
    //     cout << i.ff << endl;
    //     for(auto j : i.ss) cout << j << " ";
    //     cout << endl;
    // }
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}