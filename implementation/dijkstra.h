struct ascending {
    bool operator()(const pll &a, const pll &b) const {
        return a.s > b.s; 
    }
};
using pq_min = priority_queue<pll, vector<pll>, ascending>; 
void dijkstra(ll *dist, ll n, ll src){
    vector<bool> visited(n + 1, false);
    pq_min pq; 
    for (int i = 1; i < n; i++) dist[i] = INF; 
    dist[src] = 0; 
    pq.push({src, dist[src]});
    while (!pq.empty()){
        int node = pq.top().f;
        pq.pop();
        if (visited[node]) continue;
        visited[node] = true;
        for (auto v: graph[node]){
            if (!visited[v.f]){
                if (dist[node] + v.s < dist[v.f]){
                    dist[v.f] = dist[node] + v.s;
                    pq.push({v.f, dist[v.f]});
                }
            }
        }
    }
}
/*
pll = pair<ll, ll> 
f = first
s = second
dist = dist[n];
*/