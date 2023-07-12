#include <bits/stdc++.h>
using namespace std;
 
// MY PERSONAL TEMPLATE
 
#define ar array
#define v vector
#define ll long long
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
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// NOTE : 1 (TRUE), 2 (FALSE)

bool visited[25][25];
int counter = 0, mat[25][25], M, N, B, K, x;
v<int> vec;
 
void f(int x, int y, int c) {
    if ((x >= 0 && x < M) && (y >= 0 && y < N)) {
        if (mat[x][y] == c && !visited[x][y]){
            counter++;
            visited[x][y] = true;
            f(x+1,y,c);
            f(x-1,y,c);
            f(x,y+1,c);
            f(x,y-1,c);
        } 
    }

}

int main() {

    cin >> M >> N;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            cin >> mat[i][j];

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++){
            f(i, j, mat[i][j]);
            vec.pb(counter*(counter-1));
            counter = 0;
        }

    cout << *max_element(all(vec)) << endl;
            

    return 0;
}