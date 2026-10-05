struct ascending { 
    bool operator()(const pll &a, const pll &b) const { 
        return a.s > b.s; 
    }
};
using pq_min = priority_queue<pll, vector<pll>, ascending>; 
void dijsktra(*dist, int n, int src){
    bool visited[n + 1] = {false};
    pq_min pq; 
    for (int i = 1; i <= n; i++) dist[i] = INF; 
        dist[src] = 0; 
        pq.push({src, 0});
        while (!pq.empty()){
            int mn_idx = pq.top().f;
            pq.pop();
            if (visited[mn_idx]) continue; 
            visited[mn_idx] = true; 
            for (auto v: graph[mn_idx]){
                if (!visited[v.f]){
                    if (dist[mn_idx] + v.s < dist[v.f]){
                        dist[v.f] = dist[mn_idx] + v.s; 
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