#include <bits/stdc++.h>
using namespace std;
 
// MY PERSONAL TEMPLATE
 
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
 
const int MAX_N = LLONG_MAX;
const int MOD   = 1e9 + 7;
const int INF   = 1e9;
const ld  EPS   = 1e-9;
const ld  PI    = 3.1415926535897932384626433832795;
 
int gcd(int a,int b) { if (b==0) return a; return gcd(b, a%b); }
int lcm(int a,int b) { return a/gcd(a,b)*b; }
bool prime(int a)  { if (a==1) return 0; for (int i=2;i*i<=a;i++) if (a%i==0) return 0; return 1; }
 
// NOTE : 0 (False), 1 (True)
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);

    int x1, x2, y1, y2, r1, r2; cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    ld manh_dist = sqrt(abs((x2-x1)*(x2-x1)) + abs((y2-y1)*(y2-y1)));
    cout << (manh_dist > r1+r2 or manh_dist < abs(r2-r1) ? "tidak bersentuhan" : "bersentuhan") << endl;

    return 0;
}