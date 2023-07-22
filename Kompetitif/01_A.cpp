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

struct p {
    string id;
    int score[3];
};

bool rule(p x, p y) {
    if(x.score[2] == y.score[2]) return x.score[2] < y.score[2];
    if(x.score[1] == y.score[1]) return x.score[1] < y.score[1];
    return x.score[0] < y.score[0];
}
 
void solve(){
    int n, m; string id; cin >> n >> m >> id;
    vector<p> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].id >> v[i].score[0] >> v[i].score[1] >> v[i].score[2];
    }
    sort(all(v), rule);
    for(int i = 0; i < m; i++) {
        if(v[i].id == id) cout << "YA" << endl;
    }
    cout << "TIDAK" << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int tc; cin >> tc; while(tc--) solve();
    return 0;
}