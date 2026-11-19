#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

void solve(){
    char grid[5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> grid[i][j];
        }
    }
    int cnt = 0; 
    int ans = 0;
    for (int i = 0; i < 5; i++){
        int cnt = 0; 
        for (int j = 0; j < 5; j++){
            cnt += (int)(grid[i][j] == 'o');
        }
        ans = max(ans, cnt);
    }
    for (int j = 0; j < 5; j++){
        int cnt = 0; 
        for (int i = 0; i < 5; i++){
            cnt += (int)(grid[i][j] == 'o');
        }
        ans = max(ans, cnt);
    }
    cnt = 0;
    for (int i = 0; i < 5; i++){
        int j = i;
        cnt += (int)(grid[i][j] == 'o');
        ans = max(ans, cnt);

    }
    cnt = 0;
    for (int j = 4; j >= 0; --j){
        int i = 4 - j;
        cnt += (int)(grid[i][j] == 'o');
        ans = max(ans, cnt);
    }
    cout << 5 - ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int tt = 1; 
    // cin >> tt;
    while (tt--){
        solve();
    }
}