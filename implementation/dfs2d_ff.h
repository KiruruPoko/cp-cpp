int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, m; 
bool visited[MAXN][MAXN];
void floodfill(int r, int c){
    if (r < 0 || r >= n || c < 0 || c >= m || building[r][c] == '#' || visited[r][c]){
        return;
    }
    visited[r][c] = true; 
    for (int i = 0; i < 4; i++) floodfill(r + dx[i], c + dy[i]);
}