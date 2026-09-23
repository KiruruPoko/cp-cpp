// supposed n = 10000000
vector<int> graph[1000001]; 
bool visited[1000001];

void bfs(int n){
    queue<int> q; 
    q.push(n);
    visited[n] = true;
    while (!q.empty()){
        int cur = q.front();
        q.pop();
        for (auto v: graph[cur]) if (!visited[v]){
            visited[v] = true;
            q.push[v];
        }
    }
}

