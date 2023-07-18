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
 
void solve(){
    string s; cin >> s; 
    int n, sd, sm; cin >> n >> sd >> sm; 
    priority_queue<int, vector<int>, greater<int> > p;
    int ans = 0;
    int x, y, z;
    for(int i = 0; i < n-1; i++) {
        cin >> x >> y >> z;
        while (sd < x) {
            if(!p.empty()) {
                ans += p.top();
                sd++;
                p.pop();
            } else {cout << -1 << endl; return;}
        }
        if (z <= y) {
            ans+=z;
            sd++;
        } else {
            ans += y;
            p.push(abs(z-y));
        }
    }
    while(sd < sm) {
        if(!p.empty()) {
            ans += p.top();
            sd++;
            p.pop();
        } else {cout << -1 << endl; return;}
    }
    cout << ans << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}