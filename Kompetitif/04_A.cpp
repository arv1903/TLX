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
 
void solve(){
    int n, mat1[75][75], mat2[75][75], iden = 0, dkananb = 0, ver = 0, hor = 0, dkirib = 0; cin >> n >> n; memset(mat1,0,sizeof(mat1)); memset(mat2,0,sizeof(mat2));
    for(int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> mat1[i][j]; cin >> n >> n;for(int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> mat2[i][j];

    for(int i = 0; i < n; i++) 
        for(int j = 0; j < n; j++) {
            if (mat1[i][j] == mat2[i][j]) {
                iden++; if (iden >= n*n) {cout << "identik" << endl; return;}
            } if (mat1[i][j] == mat2[i][n-j-1]) {
                ver++; if (ver >= n*n) {cout << "vertikal" << endl; return;}
            } if (mat1[i][j] == mat2[n-i-1][j]) {
                hor++; if (hor >= n*n) {cout << "horisontal" << endl; return;}
            } if (mat1[i][j] == mat2[j][i]) {
                dkananb++; if (dkananb >= n*n) {cout << "diagonal kanan bawah" << endl; return;}
            } if (mat1[i][j] == mat2[n-j-1][n-i-1]) {
                dkirib++; if (dkirib >= n*n) {cout << "diagonal kiri bawah" << endl; return;}
            }
        }
    cout << "tidak identik" << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}