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

int t, n, ans, score[5], vec[5];

bool equivalent() {
    for(int i = 0; i < n; i++) if (score[i] != vec[i]) return false;
    return true;
}

void brute(int x, int y) {
    if (x >= n-1) {
        if(equivalent()) ans++;
    } else if (y >= n) {
        brute(x+1, x+2);
    } else{
        score[x] += 3; brute(x, y+1); score[x] -= 3;

        score[y] += 3; brute(x, y+1); score[y] -= 3;

        score[x]++; score[y]++; brute(x, y+1); score[x]--; score[y]--;
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    cin >> t;
    for(int i = 0; i < t; i++){
        memset(score,  0, sizeof(score));
        cin >> n; for(int j = 0; j < n; j++) cin >> vec[j];
        ans = 0; brute(0, 1); cout << (ans > 0 ? "YES" : "NO") << endl;
    }

    return 0;
}