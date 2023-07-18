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

int n, m; 
 
int bin_search(int x, v<int> vec) {
    int l = 1, r = 1e18, pos=0;
    while(l <= r) {
        int mid = (r+l)/2, sum = 0; for(int i = 0; i < n; i++) sum += mid/vec[i]; 
        if (sum >= x) {
            r=mid-1;
            pos=mid;
        }
        else l=mid+1;
    }
    return pos;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    cin >> n >> m; v<int> vec(n); inp_v(vec);
    cout << bin_search(m+1, vec) - bin_search(m, vec) << endl;

    return 0;
}