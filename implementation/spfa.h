void spfa(int start, int n){
    vector<int> dist(n + 1, INF);
    vector<int> count(n + 1, 0);
    dist[start] = 0; 
    queue<int> q;
    q.push(start);
    bool neg_cycle = false; 
    while (!q.empty()){
        int u = q.front();
        q.pop();
        if (++count[u] >= n){
            neg_cycle = true; 
            break;
        }
        for (auto vw: G[u]){
            int v = vw.f, w = vw.s; 
            if (dist[u] + w < dist[v]){
                dist[v] = dist[u] + w; 
                q.push(v);
            }
        }   
    }
}



// single shortest path but can be used for negative