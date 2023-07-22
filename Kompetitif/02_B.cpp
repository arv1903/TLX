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

bool prime[(int)1e6];
vector<int> l;

void sieve() {
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for(int i = 2; i*i <= 1e6; i++) {
        if(prime[i]) {
            for(int j = i*i; j < 1e6; j+=i){
                prime[j] = 0;
            }
        }
    }
    for(int i = 0; i < 1e6; i++) {
        if(prime[i]) l.pb(i);
    }
}

void solve(){   
    sieve();
    int n, x; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        cout << l[x-1] << endl;
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}