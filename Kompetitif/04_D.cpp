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

int n, r, y, j, idx = 0, cnt = 0, cur=0, arr[300][20], catat[20], total[10000000]; bool con = false;

void kombi(int kedalaman) {
    if (kedalaman > r){
        idx++;
        for (int i=1; i<=r; i++) arr[idx][i] = catat[i];
    } else {
        for (int i=catat[kedalaman-1]+1; i <= n; i++){catat[kedalaman] = i; kombi(kedalaman+1);}
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    string trsh; getline(cin, trsh);
    cin >> n >> r >> y >> j; v<pair<int, char> > vp(n+1); v<int> grade(j+1);
    for(int i=1; i <= n; i++) cin >> vp[i].ff >> vp[i].ss;
    for(int i=1; i <= j; i++) cin >> grade[i];
    kombi(1);
    for(int i = 1; i <= idx; i++){
        do {
            cur = 0; con = false;
            for(int k = 1; k <= r; k++) {
                if(k == 1) cur += vp[arr[i][k]].ff;
                else{
                    if(vp[arr[i][k-1]].ss == 'B') cur+=vp[arr[i][k]].ff;    
                    if(vp[arr[i][k-1]].ss == 'P') cur+=vp[arr[i][k]].ff*2;
                    if(vp[arr[i][k-1]].ss == 'L') cur+=vp[arr[i][k]].ff/2;
                    if(vp[arr[i][k-1]].ss == 'Y') {cur+=vp[arr[i][k]].ff; con = true;}
                    if(con) cur+=y;
                }
            }
            total[cnt] = cur;
            cnt++;
        } while(next_permutation(arr[i]+1, arr[i]+r+1));
    } sort(total, total+cnt);

    for(int k = 1; k <= j; k++) {
        int temp = upper_bound(total, total+cnt, grade[k]) - total;
        cout << cnt-temp << endl;
    }

    return 0;
}