/* Date : 2023, August 18 */ 

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
    int s, f, n, d, r, a, b; cin >> s >> f >> n >> d; int r = d/2;
    vector<pii> v;
    for(int i = 0; i < n; i++) cin >> a >> b, v.pb({a-r, b}), v.pb({a+r, b});
    sort(v.begin(), v.end());
    
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}