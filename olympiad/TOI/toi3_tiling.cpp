#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;

int grid[20][20];
int n; 
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
bool visited[20][20];
bool inside(int x, int y){
    return (x > 0 && y > 0 && x <= n && y <= n);
}
void dfs(int x, int y, vector<pii> &trace){
    visited[x][y] = true; 
    trace.push_back({x, y});

    for (int d = 0; d < 4; d++){
        int nx = x + dx[d];
        int ny = y + dy[d];
        if (!inside(nx, ny)) continue; 
        if (!visited[nx][ny] && grid[nx][ny] == grid[x][y]){
            dfs(nx, ny, trace);
        }
    }
}
void solve(){
    cin >> n;   
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> grid[i][j];
        }
    }
    int ans = 0; 
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (visited[i][j] || grid[i][j] == 0) continue; 
            vector<pii> trace; 
            dfs(i, j, trace);
            if (sz(trace) != 3) continue; 

            int mn_x = 999999, mx_x = -1; 
            int mn_y = 999999, mx_y = -1; 

            for (auto [r, c]: trace){
                mn_x = min(mn_x, r);
                mx_x = max(mx_x, r);
                mn_y = min(mn_y, c);
                mx_y = max(mx_y, c);
            }
            if (mx_x - mn_x == 1 && mx_y - mn_y == 1) ans++;
        }
    }
    cout << ans << '\n';
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