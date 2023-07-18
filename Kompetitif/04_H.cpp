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

    int n, x; cin >> n; int vec[n+1];
    for(int i = 1; i <= n; i++) cin >> vec[i];
    sort(vec+1, vec+n+1);
    cin >> x; int sz = n/x, spc = n%x; v<int> sze(x);
    for(int i = 0; i < x; i++) {
        sze[i] = sz;
        if (spc > 0) {sze[i]++; spc--;}
    } sort(all(sze));
 
    do {
        bool con = false; int cur = 0;
        for(int i = 0; i < x-1; i++) {
            cur += sze[i];
            if (vec[cur] == vec[cur+1]) con = true;
        }
        if (!con) {
            cur = 0;
            for(int i = 0; i < x-1; i++) {
                cur += sze[i];
                cout << vec[cur]+1;
                cout << (i == x-2 ? "\n" : " "); 
            }
            return 0;
        }
    } while(next_permutation(all(sze)));

    return 0;
}
