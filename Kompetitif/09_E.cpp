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
 
// UB = >, LB = >=
 
void solve(){
    int n, k; string s, sorted; char x; map<string, bool> vis; map<string, int> dis; queue<string> q;
    cin >> n; for(int i = 0; i < n; i++ ) cin >> x, s+=x, sorted += x; cin >> k;
    sort(all(sorted)); if(s == sorted) {cout << 0 << endl; return;}
    q.push(s); vis[s] = 1; sort(all(s));
    while(!q.empty()) {
        for(int i = 0; i <= q.front().length()-k; i++) {
            string cur     = q.front();
            if(cur == s) {cout << dis[cur] << endl; return;}
            string cur_sub = cur.substr(i, k);
            reverse(all(cur_sub)), cur.erase(i, k), cur.insert(i, cur_sub);
            if(vis[cur]) continue;
            q.push(cur);
            vis[cur] = 1;
            dis[cur] = dis[q.front()] + 1; 
        }
        q.pop();
    } 
    cout << -1 << endl;

}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}