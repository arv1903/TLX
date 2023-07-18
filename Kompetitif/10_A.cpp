#include <bits/stdc++.h>
using namespace std;
 
#define ar array
#define v vector
#define int long long
#define ld long double 
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define ff first
#define ss second
#define inp_v(vec) for (auto &i : vec) cin >> i;
#define prt_v(vec) for (auto i : vec) cout << i << endl;
#define clr(x) memset(x, 0, sizeof(x))
#define gcd(a, b) __ gcd(a, b);
#define lcm(a, b) (a*(b/gcd(a,b)))
#define ping(x) cerr << x << "*" << endl;
 
const int MAX_N = 1e5+5;
const int MOD   = 1e9 + 7;
const int INF   = 1e9;
const ld  EPS   = 1e-9;
const ld  PI    = 3.1415926535897932384626433832795;
 
bool prime(int a)  { if (a==1) return 0; for (int i=2;i*i<=a;i++) if (a%i==0) return 0; return 1; }
 
// NOTE : 0 (False), 1 (True)

int parent[100005];

int find(int x) {
    if (parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}

void join(int a, int b) {parent[find(a)] = find(b);}

void solve(){
    int n, q; cin >> n >> q;
    for(int i = 0; i < q; i++) {
        int x, a, b; cin >> x >> a >> b;
        if(x == 1) {
            join(a,b);
        } else {
            if(find(a) == find(b)) cout << "Y" << endl;
            else cout << "T" << endl;
        }
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    for(int i = 0; i <= 100000; i++) parent[i] = i;
    solve();
    return 0;
}