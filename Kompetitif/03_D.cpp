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
#define a first
#define b second
 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
// NOTE : 1 (TRUE), 2 (FALSE)

int arr[100001], n;

int find_pos(int r){
    int l = 0, batas = n-1, pos=0;
    while(l <= batas) {
        int mid = (batas+l)/2;
        if (arr[mid] <= r) {
            l=mid+1;
            pos=l;
        }
        else batas=mid-1;
    }

    return pos;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    int q, x, y; cin >> q; 
    for (int i = 0; i < q; i++) {
        cin >> x >> y;
        cout << abs(find_pos(y) - find_pos(x)) << endl;
    }
    return 0;
}