// #include <bits/stdc++.h>
// using namespace std;
 
// // MY PERSONAL TEMPLATE
 
// #define ar array
// #define v vector
// #define ll long long
// #define ld long double 
// #define all(a) (a).begin(), (a).end()
// #define pb push_back
// #define mk make_pair
// #define pii pair<int, int>
// #define ff first
// #define ss second
// #define input_vec(vec) for (auto &i : vec) cin >> i;
// #define print_vec(vec) for (auto i : vec) cout << i << endl;
// #define clr(x) memset(x, 0, sizeof(x))
 
// const int MAX_N = 1e5 + 5;
// const ll MOD = 1e9 + 7;
// const ll INF = 1e9;
// const ld EPS = 1e-9;

// // NOTE : 1 (TRUE), 2 (FALSE)

// bool visited[25][25];
// int counter = 0, mat[25][25], M, N, B, K, x;
// v<int> vec;
 
// void f(int x, int y, int c) {
//     if ((x >= 0 && x < M) && (y >= 0 && y < N)) {
//         if (mat[x][y] == c && !visited[x][y]){
//             counter++;
//             visited[x][y] = true;
//             f(x+1,y,c);
//             f(x-1,y,c);
//             f(x,y+1,c);
//             f(x,y-1,c);
//         } 
//     }

// }

// int main() {

//     cin >> M >> N;
//     for (int i = 0; i < M; i++)
//         for (int j = 0; j < N; j++)
//             cin >> mat[i][j];

//     for (int i = 0; i < M; i++)
//         for (int j = 0; j < N; j++){
//             f(i, j, mat[i][j]);
//             vec.pb(counter*(counter-1));
//             counter = 0;
//         }

//     cout << *max_element(all(vec)) << endl;
            

//     return 0;
// }

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
 
const int Dx[4]  = {1, 0, -1, 0};
const int Dy[4]  = {0, 1, 0, -1};

int m, n, x, y; 

bool in_grid(int x, int y) {return (x >= 0 && x < m) && (y >= 0 && y < n);}

void solve(){
    cin >> m >> n;
    int arr[m][n]; bool vis[n][m]; memset(vis, 0, sizeof(vis));
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) cin >> arr[i][j];

    int ans = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            memset(vis, 0, sizeof vis);
            queue<pii> q;
            q.push({i,j});
            int cnt = 0;
            while(!q.empty()) {
                x = q.front().ff, y = q.front().ss;
                q.pop();
                if(in_grid(x, y) and !vis[x][y] and arr[i][j] == arr[x][y]) {
                    // cout << i << " " << j << " " << grid[i][j] << endl;
                    vis[x][y] = 1;
                    cnt ++;
                    for(int k = 0; k < 4; k++) q.push({x+Dx[k], y+Dy[k]});
                }
            }
            ans = max(ans, cnt*(cnt-1));
        }
    }
    cout << ans << endl;
}
 
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}