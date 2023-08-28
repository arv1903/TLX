/* Date : 2023, August 28 */ 

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

char g[25][25];
int x, n, m; 
bool con = 0;

void fall() {
    for(int i = x-1; i >= 0; i--)
        for(int j = 0; j < m; j++) 
            if(g[i][j] == '1') 
                for(int k = i+1; k < n; k++) {
                    if(g[k][j] == '0') swap(g[k-1][j], g[k][j]);
                    else break;
                }
    x = 0, con = 0;
}

void remove_full() {
    for(int i = 0; i < n; i++) {
        bool full = 1;
        for(int j = 0; j < m; j++) full &= g[i][j] == '1';
        if(full) {
            con = 1, x = i;
            for(int j = 0; j < m; j++) g[i][j] = '0';
        }
    }
}
 
void solve(){
    cin >> n >> m;
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> g[i][j];
    remove_full();
    while(con) {
        fall(); remove_full();
    } 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << g[i][j];
        }
        cout << endl;
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}