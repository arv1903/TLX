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

bool visited[30][30];
int counter = 0, mat[30][30], M, N, B, K, x, val[30][30];
 
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

void ganti(int x, int y, int c) {
    if ((x >= 0 && x < M) && (y >= 0 && y < N)){
        if (mat[x][y] == c && !visited[x][y]){
            mat[x][y] = 0;
            visited[x][y] = true;
            ganti(x+1,y,c);
            ganti(x-1,y,c);
            ganti(x,y+1,c);
            ganti(x,y-1,c);
        }
    }
}

void drop() {
    for (int i = N-1; i >= 0; i--){
        for (int j = 0; j < N; j++) {
            if (mat[i][j] != 0 && mat[i+1][j] == 0){
                swap(mat[i][j], mat[i+1][j]);
                i+=2;
            }
        }
    }
}

int main() {

    cin >> M >> N;
    int temp = 0, posi, posj;
    memset(mat, 1, sizeof(mat));
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            cin >> mat[i][j];

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++){
            f(i, j, mat[i][j]);
            val[i][j] = counter*(counter-1);
            if (counter*(counter-1) > temp) {
                posi = i; posj = j;
            }
            temp = max(temp, counter*(counter-1));
            counter = 0;
        }

    memset(visited, 0, sizeof(visited));
    ganti(posi, posj, mat[posi][posj]);
    drop();
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++){
            if (mat[i][j] == 0) cout << ". ";
            else cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}