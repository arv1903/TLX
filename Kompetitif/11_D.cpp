#include <bits/stdc++.h>
using namespace std;

#define int        long long
#define all(x)     (x).begin(), (x).end()
#define pb         push_back
#define pii        pair<int, int>
#define ff         first
#define ss         second
 
#define lcm(x,y)   (x * y / __gcd(x, y))
#define dbg(...)   cout << '(' << ' ' << #__VA_ARGS__ << ' ' << '=' << ' ' << __VA_ARGS__ << ' ' << ')' << endl;
 
const int MOD    = 1e9 + 7;
const int INF    = 1e9;
 
// UB = >, LB = >=

vector<int> parent;

void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v]) return v;
    return find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) parent[b] = a;
}
 
void solve(){   
    int n, x, ans = 0, dist, a, b; cin >> n;
    parent.assign(n, 0);
    iota(all(parent), 0);
    priority_queue<pair<int, pii>, vector<pair<int, pii>>, greater<pair<int, pii>>> pq;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> x;
            pq.push({x, {i, j}});
        }
    }
    while(!pq.empty()) {
        dist = pq.top().ff;
        a = find_set(pq.top().ss.ff);
        b = find_set(pq.top().ss.ss);
        pq.pop();
        if(a != b) {
            ans += dist;
            union_sets(a, b);
        }
    } 
    cout << ans << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}