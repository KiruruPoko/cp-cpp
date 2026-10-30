#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

// <-1, 0>, <1, 0>, <0, 1>, <0, -1>
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int m; 
int grid[32][32];
bool inside(int x, int y){
    return x > 0 && x <= m && y > 0 && y <= m; // range: (1, m)
}
int ans = -100;
void dfs(int x, int y){
    if (!inside(x, y)) return; 
    if (grid[x][y] == 100) return;
    ans = max(ans, grid[x][y]);
    for (int i = 0; i < 4; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if (!inside(nx, ny)) continue; 
        if (grid[nx][ny] <= grid[x][y] || grid[nx][ny] == 100) continue; 
        dfs(nx, ny);
    }
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);    
    cin >> m; 
    int stx, sty; 
    cin >> sty >> stx; 
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= m; j++){
            cin >> grid[i][j];
        }
    } 
    // cout << grid[stx][sty] << '\n'; // for debugging 
    dfs(stx, sty);
    cout << ans << '\n';
}
