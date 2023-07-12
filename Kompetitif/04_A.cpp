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
    int n; cin >> n >> n; int mat1[75][75], mat2[75][75]; bool checked = false; int iden = 0, dkananb = 0, ver = 0, hor = 0, dkirib = 0;
    memset(mat1,0,sizeof(mat1)); memset(mat2,0,sizeof(mat2));
    for(int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> mat1[i][j];
    cin >> n >> n;
    for(int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> mat2[i][j];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (mat1[i][j] == mat2[i][j]) {
                iden++;
                if (iden >= n*n) {cout << "identik" << endl; checked = true; break;}
            } if (mat1[i][j] == mat2[i][n-j-1]) {
                ver++;
                if (ver >= n*n) {cout << "vertikal" << endl; checked = true; break;}
            } if (mat1[i][j] == mat2[n-i-1][j]) {
                hor++;
                if (hor >= n*n) {cout << "horisontal" << endl; checked = true; break;}
            } if (mat1[i][j] == mat2[j][i]) {
                dkananb++;
                if (dkananb >= n*n) {cout << "diagonal kanan bawah" << endl; checked = true; break;}
            } if (mat1[i][j] == mat2[n-j-1][n-i-1]) {
                dkirib++;
                if (dkirib >= n*n) {cout << "diagonal kiri bawah" << endl; checked = true; break;}
            }
        }
        if (checked) break;
    } 
    if (!checked) cout << "tidak identik" << endl;

    return 0;
}