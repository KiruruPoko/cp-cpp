void bfs(int sx, int sy){
    queue<pii> q;

    dist[sx][sy] = 0;
    q.push({sx, sy});

    while (!q.empty()){
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (!inside(nx, ny)) continue;
            if (grid[nx][ny] == 'BLOCKED') continue;
            if (dist[nx][ny] != INF) continue;

            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }
}

// if multiple source, change parameter to vector and use auto loop push to queue 
// INF is used for replacing visited