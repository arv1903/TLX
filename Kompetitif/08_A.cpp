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
    int n, a; cin >> n; list<int> l; string s;
    while(n--) {
        cin >> s;
        if(s == "push_back") cin >> a, l.emplace_back(a);
        if(s == "push_front") cin >> a, l.push_front(a);
        if(s == "pop_front") l.pop_front();
        if(s == "pop_back") l.pop_back();
    }
    for(auto i : l) cout << i << "\n";
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    Solve();
    return 0;
}