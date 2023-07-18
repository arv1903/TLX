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
#define input_vec(vec) for (auto &i : vec) cin >> i;
#define print_vec(vec) for (auto i : vec) cout << i << endl;
#define clr(x) memset(x, 0, sizeof(x))
 
const int MAX_N = 1e5 + 5;
const int MOD   = 1e9 + 7;
const int INF   = 1e9;
const ld  EPS   = 1e-9;
const ld  PI    = 3.1415926535897932384626433832795;
 
int gcd(int a,int b) { if (b==0) return a; return gcd(b, a%b); }
int lcm(int a,int b) { return a/gcd(a,b)*b; }
bool prime(int a)  { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
 
// NOTE : 1 (TRUE), 2 (FALSE)
 
signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x, temp; cin >> n >> x; v<pair<double, int> > vec(n); double ans = 0.00000;
    for(int i = 0; i < n; i++) {cin >> temp; vec[i].ss = temp;}
    for(int i = 0; i < n; i++) {cin >> temp; vec[i].ff = temp*1.00000/vec[i].ss;}
    sort(all(vec));
    // for(int i = 0; i < n; i++){
    //     cout << vec[i].ff << " " << vec[i].ss << endl;
    // }
    for(int i = n-1; i >= 0; i--) {
        int temp2 = vec[i].ss;
        while(x > 0 and temp2 > 0) {
            ans+=vec[i].ff;
            x--; temp2--;
        }
    }
    cout << fixed << setprecision(5) << ans << endl;
    

    
    return 0;
}