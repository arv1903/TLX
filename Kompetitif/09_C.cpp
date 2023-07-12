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
#define clr(x)     memset(x, 0, sizeof(x))
#define gcd(a,b)   __gcd(a, b);
#define lcm(a,b)   (a*(b/gcd(a,b)))
#define ping(x)    cerr << x << "*" << endl;
#define lb         lower_bound
#define ub         upper_bound
 
const int MAX_N  = 1e5+5;
const int MOD    = 1e9 + 7;
const int INF    = 1e9;
const ld  EPS    = 1e-9;
const ld  PI     = 3.1415926535897932384626433832795;
 
bool prime(int a)  { if (a==1) return 0; for (int i=2;i*i<=a;i++) if (a%i==0) return 0; return 1; }
 
// NOTE : 0 (False), 1 (True)

map<string, v<string> > mp;
map<string, bool> visited;
v<string> res;
bool con= false;
string base, target;

void cr() { res.clear(); visited.clear();}
 
bool fnd(string base, string target) {
    if(base == target) return true;
    if(visited[base]) return false;
    visited[base] = true;
    for(int i = 0; i < mp[base].size(); i++) {
        if (!visited[mp[base][i]]) {
            if (fnd(mp[base][i], target)){
                res.pb(mp[base][i]);
                return true;
            }  
        }
    }
    return false;
}

void solve(){
    int n, m; string p, c; cin >> n >> m;
    
    for(int i = 0; i < m; i++) {
        cin >> p >> c;
        mp[p].pb(c);
    }
    cin >> base >> target;
    if (fnd(base, target)){
        if (res.size() > 0) {cout << base << endl; con = true;}
        for(int i = res.size()-1; i >= 0; i--) cout << res[i] << endl;
    } 
    cr();
    if (fnd(target, base)){
        if (res.size() > 0) {cout << target << endl; con = true;}
        for(int i = res.size()-1; i >= 0; i--) cout << res[i] << endl;
    }
    if (!con) cout << "TIDAK MUNGKIN" << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}