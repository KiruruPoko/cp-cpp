#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
#define pll pair<ll, ll>
#define f first 
#define s second

vector<pll> graph[100005]; 
bool visited[100005] = {false};
const ll INF = 1e18;
struct ascending {
    bool operator()(const pll &a, const pll &b) const { 
        return a.s > b.s; 
    }
};
using pq_min = priority_queue<pll, vector<pll>, ascending>; 
void dijkstra (ll *dist, int n, int src){
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
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, m; 
    cin >> n >> m;  
    for (int i = 1; i <= m; i++){
        int a, b, w; 
        cin >> a >> b >> w; 
        graph[a].push_back({b, w});
    }
    ll dist[n + 1];
    dijkstra(dist, n, 1);
    for (int i = 1; i <= n; i++) cout << dist[i] << " "; 
    cout << '\n';
}
