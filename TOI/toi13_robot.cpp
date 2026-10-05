#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define all(x) begin(x), end(x) 
#define pii pair<int, int> 
#define f first 
#define s second
const int INF = 1e9; 
char grid[2005][2005];
int dist[2005][2005];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int n, m; 
vector<pii> pos_x; 
bool inside(int x, int y){
    return x > 0 && y > 0 && x <= n && y <= m;
}
void bfs(){
    queue<pii> q; 
    for (auto &p: pos_x){
        q.push(p);
        dist[p.f][p.s] = 0; 
    }
    while (!q.empty()){
        auto cur = q.front();
        q.pop();
        int x = cur.f, y = cur.s; 
        for (int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (!inside(nx, ny)) continue; 
            if (grid[nx][ny] == 'W') continue;
            if (dist[nx][ny] != INF) continue;
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    vector<pii> pos_a; 
    int collected = 0; 
    int sum_dist = 0; 
    cin >> n >> m; 
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> grid[i][j];
            if (grid[i][j] == 'A') pos_a.emplace_back(i, j);
            else if (grid[i][j] == 'X') pos_x.emplace_back(i, j);
            dist[i][j] = INF; 
        }
    }
    bfs();
    for (auto &p: pos_a){
        if (dist[p.f][p.s] != INF){
            collected++; 
            sum_dist += dist[p.f][p.s] * 2;
        }
    }
    cout << collected << " " << sum_dist << '\n';
}