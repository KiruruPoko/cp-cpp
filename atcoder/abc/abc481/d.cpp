#include <bits/stdc++.h>
using namespace std; 
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;
#define f first
#define s second

const ll INF = 1e18; 
vector<pii> g[200005];
struct ascending {
    bool operator()(const pll &a, const pll &b) const {
        return a.s > b.s; 
    }
};
using pq_min = priority_queue<pll, vector<pll>, ascending>; 
void dijkstra(ll *dist, ll n, ll src){
    vector<bool> visited(n + 1, false);
    pq_min pq; 
    for (int i = 1; i <= n; i++) dist[i] = INF; 
    dist[src] = 0; 
    pq.push({src, dist[src]});
    while (!pq.empty()){
        int node = pq.top().f;
        pq.pop();
        if (visited[node]) continue;
        visited[node] = true;
        for (auto v: g[node]){
            if (!visited[v.f]){
                if (dist[node] + v.s < dist[v.f]){
                    dist[v.f] = dist[node] + v.s;
                    pq.push({v.f, dist[v.f]});
                }
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n, m, s, t; 
    cin >> n >> m >> s >> t; 
    vector<pii> edge;
    for (int i = 0; i < m; i++){
        int a, b; 
        cin >> a >> b; 
        edge.emplace_back(a, b);
    }
    sort(all(edge));
    for (int i = 0; i < sz(edge); i++){
        if (i == 0){
            g[edge[i].f].emplace_back(edge[i].s, 0);
        }
        else {
            if (edge[i - 1].f != edge[i].f) {
                g[edge[i].f].emplace_back(edge[i].s, 0);
            }
            else {
                g[edge[i].f].emplace_back(edge[i].s, 1);
            }
        }
    }
    ll dist[n + 1];
    dijkstra(dist, n, s);
    cout << (dist[t] == INF? -1 : dist[t]) << '\n';
}