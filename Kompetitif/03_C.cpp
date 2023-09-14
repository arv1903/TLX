/* Date : 2023, September 12 */ 

#include <bits/stdc++.h>
using namespace std;
 
#define int      long long
#define all(a)   (a).begin(), (a).end()
#define pb       push_back
#define pii      pair<int, int>
 
#define dbg(x)   cout << '(' << ' ' << #x << ' ' << '=' << ' ' << x << ' ' << ')' << endl;
 
const int MOD  = 1e9 + 7;
const int INF  = 1e9;
 
// UB = >, LB = >=
 
void Solve(){
    int n, q; cin >> n >> q;
    vector<string> N(n), T(n);
    for(int i = 0; i < n; i++) cin >> N[i] >> T[i];
    for(int i = 0; i < q; i++) {
        string s; cin >> s;
        int id = lower_bound(all(N), s) - N.begin();
        if(id == n) cout << "NIHIL" << endl;
        else if(N[id] == s) cout << T[id] << '\n';
        else cout << "NIHIL" << endl;
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    Solve();
    return 0;
}