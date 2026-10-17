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
vector<pll> graph[200005];
struct ascending {
    bool operator()(const pll &a, const pll &b) const {
        return a.s > b.s;
    }
};
using pq_min = priority_queue<pll, vector<pll>, ascending>; 
void dijkstra(ll *dist, ll n, ll src){
    vector<bool> visited(n + 1, false);
    for (int i = 0; i <= n; i++) dist[i] = INF; 
    pq_min pq; 
    dist[src] = 0;  
    pq.push({src, 0});
    while (!pq.empty()){
        ll mn_idx = pq.top().f;
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
    int n, m, k; 
    cin >> n >> m; 
    for (int i = 0; i < m; i++){
        ll a, b, w; 
        cin >> a >> b >> w; 
        a++; 
        b++; 
        graph[a].emplace_back(b, w);
        graph[b].emplace_back(a, w);
    }
    cin >> k; 
    for (int i = 0; i < k; i++){
        int a, w; 
        cin >> a >> w; 
        a++; 
        graph[0].emplace_back(a, w);
    }
    ll dist[n + 1];
    dijkstra(dist, n, 0);
    cout << dist[1] << '\n';
}