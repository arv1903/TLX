/* Date : 2023, August 29 */ 

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
    int n, t, v, now = -INF, ans = 0; cin >> n;
    set<pii> s; map<pii, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> t >> v;
        if(now <= mp[{t,v}]) {
            if(s.count({t,v})) {ans++, now = i, s.clear();}
            else s.insert({t,v});
        }
        mp[{t,v}] = i;
    }
    cout << ans + !s.empty() << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}