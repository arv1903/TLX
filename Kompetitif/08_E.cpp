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
#define gcd(a, b) __ gcd(a, b);
#define lcm(a, b) (a*(b/gcd(a,b)))
 
const int MAX_N = LLONG_MAX;
const int MOD   = 1e9 + 7;
const int INF   = 1e9;
const ld  EPS   = 1e-9;
const ld  PI    = 3.1415926535897932384626433832795;
 
bool prime(int a)  { if (a==1) return 0; for (int i=2;i*i<=a;i++) if (a%i==0) return 0; return 1; }
 
// NOTE : 0 (False), 1 (True)
 
void solve(){
    int n, ans = 0; cin >> n; v<int> vec(n); inp_v(vec)
    int r = vec.size()-2, l=1;
    while(l < r) {
        ans += max(vec[l], vec[l-1]) + max(vec[r], vec[r+1]);
        l++; r--;
    }
    if (n%2 and n > 1) {
        ans += max(vec[l], vec[l+1]) + max(vec[r], vec[r-1]); 
    } else if (n > 1) {
        ans += max(vec[l], vec[r]);\
    }
    cout << (n == 1 ? vec[0] : ans) << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}