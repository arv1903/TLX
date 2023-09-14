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
    string main, sub; cin >> main >> sub; int iS, cnt = 0; bool con = 0;

    if (main.length() > sub.length()) {
        for (int i = 0; i < main.length(); i++) {
            iS = i; if (con) iS--;
            (main[i] == sub[iS] ? cnt++ : con = 1);
        }
    }
    cout << (sub.length() == cnt ? "Tentu saja bisa!" : "Wah, tidak bisa :(") << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    Solve();
    return 0;
}